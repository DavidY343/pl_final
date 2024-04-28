/*Grupo: 54 David Andrés Yañez Martinez y Fernando Consiglieri Alcantara */
/*100451958@alumnos.uc3m.es 100472111@alumnos.uc3m.es*/
%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata
#define MAX_LOCAL_VARS 64
int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;
// funciones propias
void add_local_var(char *var_name);
void print_localvar_list() ;
void free_localvar_list() ;
void add_name_func(const char *fun_name) ;
char *concat_name_to_func(const char *fun_name) ;
//
char temp [2048] ;
char identif_1 [64];
char identif_2 [64];
char fun_actual [64];

// Definitions for explicit attributes

typedef struct s_attr {
		int value ;
		char *code ;
} t_attr ;

#define YYSTYPE t_attr

typedef struct s_localvar
{
	char var[MAX_LOCAL_VARS];
	char n_fun[MAX_LOCAL_VARS];
	struct s_localvar *next;
} t_localvar;

t_localvar *tabla_local_var = NULL;
%}


// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identificador=variable

%token INTEGER       // identifica el tipo entero
%token STRING		// Identifca strings
%token MAIN          // identifica el comienzo del proc. main
%token WHILE         // identifica el bucle main
%token PUTS          // para imprimir strings se sustituye por print
%token PRINTF		// para imprimri varios elem, sustitye prin1
%token FOR			// plabra for
%token OR
%token AND
%token EQUAL
%token DIFF
%token LESSEQ
%token MOREEQ
%token IF
%token ELSE
%token RETURN

%right '='                    // es la ultima operacion que se debe realizar
%left OR
%left AND
%left EQUAL DIFF
%left '<' '>' LESSEQ MOREEQ      
%left '+' '-'                 // menor orden de precedencia
%left '*' '/' '%'              // orden de precedencia intermedio
%left UNARY_SIGN '!'            // mayor orden de precedencia

%%                            // Seccion 3 Gramatica - Semantico

axioma:  decl_variables def_funciones 					{ free_localvar_list(); }
		| def_funciones 								{ free_localvar_list(); } 
	;


decl_variables: INTEGER declaracion ';'	 				{ add_name_func("GLOBAL");printf ("%s\n", $2.code) ;}  
						r_exprvar
			;

r_exprvar:		/*LAMBDA*/								{ ; }
			| decl_variables							{ ; }
			;

def_funciones: list_funciones main_func     			{ printf ("%s\n", $2.code) ;  }
			;

list_funciones:  /*LAMBDA*/            					{ ; }
			| list_funciones funcion    			 	{ printf ("%s\n", $2.code) ;} 
			;

funcion:    IDENTIF 									{  sprintf(fun_actual, "%s", $1.code) ; }
					'(' params ')' '{' sentencias '}' 	{ add_name_func($1.code);
										 					sprintf (temp, "(defun %s (%s)\n%s)", $1.code, $4.code, $7.code) ;
										 					char *my_temp = concat_name_to_func($1.code);
															strcpy(temp, my_temp);
															$$.code = gen_code (temp) ; 
															free(my_temp); }
			;

params: 		/*lamba*/								{ strcpy(temp, ""); 
															$$.code = gen_code (temp) ; }
			| param_list								{ sprintf (temp, "%s", $1.code);
															$$.code = gen_code (temp) ; }
			;
param_list: INTEGER IDENTIF								{ sprintf (temp, "%s", $2.code);
															$$.code = gen_code (temp) ;}
			| param_list ',' INTEGER IDENTIF		 		{ sprintf (temp, "%s %s", $1.code, $4.code);
															$$.code = gen_code (temp); }
	;
main_func:  MAIN 										{sprintf(fun_actual, "%s", $1.code) ; } 
					'(' ')' '{' sentencias '}' 			{ add_name_func("main"); 
															sprintf (temp, "(defun main ()\n%s)", $6.code) ; 
															char *my_temp = concat_name_to_func("main");
															strcpy(temp, my_temp);
															$$.code = gen_code (temp) ; 
															free(my_temp); }
			;

sentencias:	sentencia 									{ sprintf (temp, "%s\n", $1.code) ;  
															$$.code = gen_code (temp) ; } ;
			| sentencias sentencia  					{ sprintf (temp, "%s%s\n", $1.code, $2.code) ;  
															$$.code = gen_code (temp) ;}
			;


sentencia:  IDENTIF {  sprintf(identif_1, "%s", $1.code) ; } 	sentencia_aux 								{ sprintf (temp, "%s", $3.code) ; 
																													$$.code = gen_code (temp) ; } 
			| PRINTF '(' STRING ',' exprs ')' ';' 																{  sprintf (temp, "%s", $5.code) ; 
																													$$.code = gen_code (temp) ; }
			| PUTS '(' STRING ')'	';'																			{ sprintf (temp, "(print \"%s\")", $3.code) ; 
																													$$.code = gen_code (temp) ; } 
			| WHILE '(' expresion ')' '{' sentencias '}' 														{sprintf (temp, "(loop while %s do \n%s)", $3.code, $6.code) ; 
																													$$.code = gen_code (temp) ;} 
			| FOR '(' IDENTIF '=' NUMBER ';' expresion ';' IDENTIF '=' expresion ')' '{' sentencias '}'			{sprintf (temp, "(setf %s %d)\n(loop while %s do \n%s(setf %s %s))", $3.code, $5.value, $7.code, $14.code, $9.code, $11.code) ; 
																													$$.code = gen_code (temp) ;} 
			| INTEGER declaracion	';'	 																		{  $$ = $2; }
			| IF '(' expresion ')' '{'sentencias_if '}'	else_statement 											{sprintf (temp, "(if %s\n(progn %s) %s)", $3.code, $6.code, $8.code) ; 
																													$$.code = gen_code (temp) ;}
			| RETURN expresion ';'																				{sprintf (temp, "(return-from %s %s)", fun_actual, $2.code) ; 
																													$$.code = gen_code (temp) ; } 
			;	

sentencia_aux: '=' expresion ';' 						{sprintf (temp, "(setf %s %s)", identif_1, $2.code) ;
															$$.code = gen_code (temp) ;}
			| '(' arguments ')' ';'						{ sprintf (temp, "(%s %s)", identif_1, $2.code);
															$$.code = gen_code (temp) ; }
			| '[' expresion ']' '=' expresion ';'		{ sprintf (temp, "(setf (aref %s %s) %s)", identif_1, $2.code, $5.code) ; 
															$$.code = gen_code (temp) ;}

	;
sentencias_if: sentencia 								{ sprintf (temp, "%s\n", $1.code) ;  
															$$.code = gen_code (temp) ; }
			| sentencias_if sentencia  					{ sprintf (temp, "%s%s", $1.code, $2.code) ;  
															$$.code = gen_code (temp) ;}
			;
else_statement: ELSE '{' sentencias_if '}' 				{ sprintf (temp, "(progn %s)", $3.code) ; 
															$$.code = gen_code (temp) ;} ;
			|	/*LAMBDA*/								{ strcpy(temp, ""); 
															$$.code = gen_code (temp) ;}
			;

declaracion: IDENTIF inicializacion 					{ sprintf (temp, "(setq %s %s)", $1.code, $2.code) ; 
															$$.code = gen_code (temp) ;
															add_local_var($1.code) ;} 
			| declaracion ',' IDENTIF inicializacion	{ sprintf (temp, "%s (setq %s %s)", $1.code, $3.code, $4.code) ; 
															$$.code = gen_code (temp) ;
															add_local_var($3.code) ;}
			;

inicializacion: /*LAMBDA*/								{ sprintf (temp, "0") ; 
															$$.code = gen_code (temp) ; } 
			| '=' expresion								{ sprintf (temp, "%s", $2.code) ;
															$$.code = gen_code (temp) ;}
			|  '[' expresion ']'						{ sprintf (temp, "(make-array %s)", $2.code) ; 
															$$.code = gen_code (temp) ;}
			;

exprs: 		expresion_o_string							{ sprintf (temp, "(prin1 %s)", $1.code) ;  
															$$.code = gen_code (temp) ;}
			| exprs ',' expresion_o_string				{ sprintf (temp, "%s (prin1 %s)", $1.code, $3.code) ;  
															$$.code = gen_code (temp) ;}
			;

expresion_o_string: expresion 							{ sprintf (temp, "%s", $1.code) ;  
															$$.code = gen_code (temp) ;}
			| STRING									{ sprintf (temp, "\"%s\"", $1.code) ;  
															$$.code = gen_code (temp) ;}
		
expresion:      termino                  				{ $$ = $1 ; }
			|   expresion '+' expresion  				{ sprintf (temp, "(+ %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion '-' expresion  				{ sprintf (temp, "(- %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion '*' expresion  				{ sprintf (temp, "(* %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion '/' expresion  				{ sprintf (temp, "(/ %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion '<' expresion  				{ sprintf (temp, "(< %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }															
			|   expresion '>' expresion  				{ sprintf (temp, "(> %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion AND expresion  				{ sprintf (temp, "(and %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion OR expresion  				{ sprintf (temp, "(or %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion EQUAL expresion  				{ sprintf (temp, "(= %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion DIFF expresion  				{ sprintf (temp, "(/= %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion LESSEQ expresion  			{ sprintf (temp, "(<= %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion MOREEQ expresion  			{ sprintf (temp, "(>= %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			|   expresion '%' expresion  				{ sprintf (temp, "(mod %s %s)", $1.code, $3.code) ;
															$$.code = gen_code (temp) ; }
			;

termino:        operando                           		{ $$ = $1 ; }                          
			|   '+' operando %prec UNARY_SIGN      		{ sprintf (temp, "(+ %s)", $2.code) ;
															$$.code = gen_code (temp) ; }
			|   '-' operando %prec UNARY_SIGN      		{ sprintf (temp, "(- %s)", $2.code) ;
															$$.code = gen_code (temp) ; }   
			|   '!' operando %prec UNARY_SIGN  			{ sprintf(temp, "(not %s)", $2.code); 
															$$.code = gen_code(temp) ; }
			;

operando:   	IDENTIF   								{ sprintf (temp, "%s", $1.code) ; 
															$$.code = gen_code (temp) ; }
			| IDENTIF '(' arguments')'					{ sprintf (temp, "(%s %s)", $1.code, $3.code);
															$$.code = gen_code (temp) ; }
			| IDENTIF '[' expresion ']'					{ sprintf (temp, "(aref %s %s)", $1.code, $3.code) ; 
															$$.code = gen_code (temp) ;}				
			|   NUMBER                   				{ sprintf (temp, "%d", $1.value) ;
															$$.code = gen_code (temp) ; }
			|   '(' expresion ')'        				{ $$ = $2 ; }
			;

arguments: 		/*lamba*/								{ strcpy(temp, ""); 
															$$.code = gen_code (temp) ; }
			| arguments_list							{ sprintf (temp, "%s", $1.code);
															$$.code = gen_code (temp) ; }
			;

arguments_list:  expresion								{ sprintf (temp, "%s", $1.code);
															$$.code = gen_code (temp) ;}
			| arguments_list ',' expresion		 		{ sprintf (temp, "%s %s", $1.code, $3.code);
															$$.code = gen_code (temp); }
			;


%%                            // SECCION 4    Codigo en C

//Funciones añadidas
// Imprime la lista de varibles locales (para depuracion)
void print_localvar_list() {
    t_localvar *current = tabla_local_var;
    printf("Lista de variables locales:\n");
    while (current != NULL) {
        printf("Variable: %s, Función: %s\n", current->var, current->n_fun);
        current = current->next;
    }
}

// Añade la variable a la tabla de variables
void add_local_var(char *var_name) {
    t_localvar *new_localvar = (t_localvar *)malloc(sizeof(t_localvar));
    if (new_localvar == NULL) {
        printf("Error: No se pudo asignar memoria para la variable local.\n");
        return;
    }
    strcpy(new_localvar->var, var_name);
    new_localvar->next = NULL;

    if (tabla_local_var == NULL) {
        tabla_local_var = new_localvar;
    } else {
        t_localvar *current = tabla_local_var;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_localvar;
    }
}

// Añade el nombre de la función a la que pertenece cada variable a la tabla de variables
void add_name_func(const char *fun_name) {
    t_localvar *current = tabla_local_var;
    while (current != NULL) {
        if (current->n_fun[0] == '\0') {
            strcpy(current->n_fun, fun_name);
        }
        current = current->next;
    }
}

// Libera la memoria de la tabla de variables
void free_localvar_list() {
    t_localvar *current = tabla_local_var;
    while (current != NULL) {
        t_localvar *temp = current;
        current = current->next;
        free(temp);
    }
    tabla_local_var = NULL; // Establecer el puntero de la lista a NULL para indicar que la lista está vacía
}


// Añade el nombre de la funcion a las variables locales
char *concat_name_to_func(const char *fun_name)
{
    size_t initial_len = strlen(temp);
    size_t buffer_size = initial_len + 500; // Tamaño inicial del buffer
    
    // Asignar memoria para el resultado
    char *result = (char *)malloc(buffer_size);
    if (result == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para el resultado.\n");
        return NULL;
    }

    strncpy(result, temp, buffer_size); // Copiar el texto original al resultado
    result[buffer_size - 1] = '\0'; // Asegurar nulidad

    t_localvar *current = tabla_local_var;
    while (current != NULL) {
			// printf("%s %s %d\n", current->n_fun, fun_name, strcmp(current->n_fun, fun_name));
        if (strcmp(current->n_fun, fun_name) == 0) {
			
            // Crear el nuevo nombre de la variable con el prefijo del nombre de la función
            char prefixed_var[MAX_LOCAL_VARS + MAX_LOCAL_VARS];
            snprintf(prefixed_var, sizeof(prefixed_var), "%s_%s", fun_name, current->var);

            // Reemplazar todas las ocurrencias de la variable en el texto
            char *pos = result;
			int in_quote = 0;
            while ((pos = strstr(pos, current->var)) != NULL) {
				
                // Verificar si no está en medio de otra palabra
                if ((pos == result || !isalnum(*(pos - 1))) &&
                    !isalnum(*(pos + strlen(current->var)))) {
                    // Mueve el resto del texto para insertar el nuevo nombre
                    size_t pos_index = pos - result;
                    char *new_result = (char *)malloc(buffer_size); // Buffer temporal para copiar el contenido
                    if (new_result == NULL) {
                        fprintf(stderr, "Error: No se pudo asignar memoria para el buffer temporal.\n");
                        free(result); // Liberar el resultado original
                        return NULL;
                    }
                    strncpy(new_result, result, pos_index); // Copiar hasta antes de la coincidencia
                    snprintf(new_result + pos_index, buffer_size - pos_index, "%s%s", prefixed_var, pos + strlen(current->var));
                    free(result); // Liberar el resultado original
                    result = new_result; // Apuntar al nuevo resultado
                    pos = result + pos_index + strlen(prefixed_var); // Mover el puntero para continuar buscando
                } else {
                    pos += strlen(current->var);
                }
				/*char *quote_pos = strchr(pos, '"');
				char *next_pos = strstr(pos, current->var);
				if ((quote_pos < next_pos) && quote_pos != NULL && next_pos != NULL)
				{
					char *next_quote_pos = strchr(quote_pos, '"');
					pos = next_quote_pos;
				}*/
            }
        }
        current = current->next;
    }

    return result;
}

int n_line = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
	fprintf (stderr, "%s en la linea %d\n", mensaje, n_line) ;
	printf ( "\n") ;	// bye
}

char *int_to_string (int n)
{
	sprintf (temp, "%d", n) ;
	return gen_code (temp) ;
}

char *char_to_string (char c)
{
	sprintf (temp, "%c", c) ;
	return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
	char *p ;
	static long int nb = 0;        // sirven para contabilizar la memoria
	static int nv = 0 ;            // solicitada en total

	p = malloc (nbytes) ;
	if (p == NULL) {
		fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
		fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
		exit (0) ;
	}
	nb += (long) nbytes ;
	nv++ ;

	return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
	char *name ;
	int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
	"main",        MAIN,           // y los token asociados
	"int",         INTEGER,
	"puts",		   PUTS,
	"printf",      PRINTF,
	"||",  		OR, 
	"&&",  		AND, 
	"==",  		EQUAL,
	"!=",  		DIFF,
	"<=", 		LESSEQ, 
	">=",		MOREEQ,
	"while", 	WHILE,
	"if", 		IF, 
	"else",		ELSE,
	"for",		FOR,
	"return",	RETURN,
	NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
								// y devuelve puntero a registro (simbolo)
	int i ;
	t_keyword *sim ;

	i = 0 ;
	sim = keywords ;
	while (sim [i].name != NULL) {
		if (strcmp (sim [i].name, symbol_name) == 0) {
									// strcmp(a, b) devuelve == 0 si a==b
			return &(sim [i]) ;
		}
		i++ ;
	}

	return NULL ;
}


/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
	char *p ;
	int l ;
	
	l = strlen (name)+1 ;
	p = (char *) my_malloc (l) ;
	strcpy (p, name) ;
	
	return p ;
}


int yylex ()
{
	int i ;
	unsigned char c ;
	unsigned char cc ;
	char ops_expandibles [] = "!<=>|%/&+-*" ;
	char temp_str [256] ;
	t_keyword *symbol ;

	do {
		c = getchar () ;

		if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
			do {		//	OJO que puede funcionar mal si una linea contiene #
				c = getchar () ;
			} while (c != '\n') ;
		}

		if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
			cc = getchar () ;
			if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
				ungetc (cc, stdin) ;
			} else {
				c = getchar () ;	// ...
				if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
					do {		// Se trata de codigo inline (Codigo embebido en C)
						c = getchar () ;
						putchar (c) ;
					} while (c != '\n') ;
				} else {		// ==> comentario, ignorar la linea
					while (c != '\n') {
						c = getchar () ;
					}
				}
			}
		} else if (c == '\\') c = getchar () ;
		
		if (c == '\n')
			n_line++ ;

	} while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

	if (c == '\"') {
		i = 0 ;
		do {
			c = getchar () ;
			temp_str [i++] = c ;
		} while (c != '\"' && i < 255) ;
		if (i == 256) {
			printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_line) ;
		}		 	// habria que leer hasta el siguiente " , pero, y si falta?
		temp_str [--i] = '\0' ;
		yylval.code = gen_code (temp_str) ;
		return (STRING) ;
	}

	if (c == '.' || (c >= '0' && c <= '9')) {
		ungetc (c, stdin) ;
		scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
		return NUMBER ;
	}

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
		i = 0 ;
		while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9') || c == '_') && i < 255) {
			temp_str [i++] = tolower (c) ;
			c = getchar () ;
		}
		temp_str [i] = '\0' ;
		ungetc (c, stdin) ;

		yylval.code = gen_code (temp_str) ;
		symbol = search_keyword (yylval.code) ;
		if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
			return (IDENTIF) ;
		} else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
			return (symbol->token) ;
		}
	}

	if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
		cc = getchar () ;
		sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
		symbol = search_keyword (temp_str) ;
		if (symbol == NULL) {
			ungetc (cc, stdin) ;
			yylval.code = NULL ;
			return (c) ;
		} else {
			yylval.code = gen_code (temp_str) ; // aunque no se use
			return (symbol->token) ;
		}
	}

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
	if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
		return (0) ;
	}

	return c ;
}


int main ()
{
	yyparse () ;
}
