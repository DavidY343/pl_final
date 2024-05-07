%{                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata

int yylex () ;
int yyerror () ;
char *mi_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;
char arg[64];
char var_locales [1024] ; 
char identif_actual[64] ;


// Definitions for explicit attributes

typedef struct s_attr {
		int value ;
		char *code ;
} t_attr ;

#define YYSTYPE t_attr

%}

// Definitions for explicit attributes

%token NUMBER        
%token IDENTIF       // Identificador=variable

%token STRING
%token MAIN          // identifica el comienzo del proc. main
%token WHILE         // identifica el bucle main
%token SETQ
%token DEFUN
%token PRINT
%token PRIN1
%token SETF
%token LOOP
%token DO
%token IF
%token PROGN
%token OR
%token AND
%token DIFF
%token LESSEQ
%token MOREEQ
%token MOD
%token NOT
%token RETURN
%token FROM
%token MAKE
%token ARRAY
%token AREF
%token MAKE-ARRAY
%token RETURN-FROM

%left OR
%left AND
%left '=' DIFF
%left '<' '>' LESSEQ MOREEQ      
%left '+' '-'                 // menor orden de precedencia
%left '*' '/' MOD              // orden de precedencia intermedio
%left UNARY_SIGN NOT            // mayor orden de precedencia
%%                            // Seccion 3 Gramatica - Semantico

axioma:			'(' axioma_aux      							{ printf("bye\n"); }
				;


axioma_aux: 	decl_variables def_funciones					{ ; }
				| def_funciones									{ ; }
				;

/*decl_variables:  SETQ IDENTIF expresion ')' '('					{ sprintf (temp, "variable %s\n%s %s !\n", $2.code, $3.code, $2.code) ; 
																	$$.code = gen_code (temp) ;
																	printf("%s", $$.code); }
					r_exprvar
				| SETQ IDENTIF '(' MAKE-ARRAY NUMBER ')' '('		{ sprintf (temp, "variable %s %d cells allot", $2.code, $5.value) ;
																		$$.code = gen_code (temp) ; 
																	printf("%s", $$.code);}
					r_exprvar
				;*/
decl_variables:  SETQ IDENTIF 									{sprintf (identif_actual, "%s", $2.code); }
					declaracion ')' '('							{ sprintf (temp, "variable %s%s\n", $2.code, $4.code) ; 
																	$$.code = gen_code (temp) ;
																	printf("%s", $$.code); }
					r_exprvar
				;

declaracion: 	expresion										{ sprintf (temp, "\n%s %s !", $1.code, identif_actual) ; 
																	$$.code = gen_code (temp) ;}
				| '(' MAKE-ARRAY NUMBER ')'						{ sprintf (temp, "%d cells allot", $3.value) ;
																		$$.code = gen_code (temp) ;}
				;

r_exprvar:		/*LAMBDA*/										{ ; }
				|   decl_variables								{ ; }
				;

def_funciones: list_funciones main_func  						{ printf ("%s\n", $2.code) ; }
					main_call               
				| main_func       								{ printf ("%s\n", $1.code) ; } 
					main_call                             
				;

main_call:		'('  MAIN ')'                     				{ printf("%s\n", $2.code) ; }
				| 		/*lambda*/                    			{ ; }
				;
list_funciones: list_funciones funcion              			{printf ("%s\n", $2.code);} 
				| funcion										{printf ("%s\n", $1.code);}  		
				;

main_func:  	DEFUN MAIN '(' ')' sentencias ')'        		{ sprintf(temp, "%s: main\n%s;", var_locales, $5.code);
																	strcpy(var_locales, ""); 
																	$$.code = gen_code(temp); }
				;

funcion:    	DEFUN IDENTIF '(' maybe_param 					{ sprintf(arg, "%s", $4.code) ; }
				')' sentencias  ')'  '('  						{ if (strcmp(arg, "") == 0)	 
																	{sprintf(temp, "%s: %s\n%s;", var_locales, $2.code, $7.code);}
																 else 
																 	{sprintf(temp, "%svariable %s\n: %s\n%s !\n%s;", var_locales, $4.code, $2.code, $4.code, $7.code);} 
																	strcpy(var_locales, "");
																	$$.code = gen_code(temp); }
				;

maybe_param: 	/*lambda*/										{ strcpy(temp, ""); 
																	$$.code = gen_code (temp) ; }
				| IDENTIF										{sprintf (temp, "%s", $1.code);
																	$$.code = gen_code(temp) ; }
				;
sentencias:		'(' sentencia ')'								{ sprintf (temp, "%s\n", $2.code) ;  
																	$$.code = gen_code (temp) ;} ;
				| '(' sentencia ')' sentencias   				{ sprintf (temp, "%s\n%s", $2.code, $4.code) ;  
																	$$.code = gen_code (temp) ;}
				;

sentencia:   	PRINT STRING                                			{sprintf (temp, ".\" %s\" cr", $2.code);
																			$$.code = gen_code(temp);}
				| PRIN1 STRING                               			{sprintf (temp, ".\" %s\"", $2.code);
																			$$.code = gen_code(temp);}
				| PRIN1 expresion                          				{sprintf (temp, "%s .", $2.code);
																			$$.code = gen_code(temp);}
				/*| SETF IDENTIF expresion                    			{sprintf (temp, "%s %s !", $3.code, $2.code);
																			$$.code = gen_code(temp);}*/
				| SETF asignacion										{sprintf (temp, "%s", $2.code);
																			$$.code = gen_code(temp);}
				| LOOP WHILE expresion  DO sentencias        			{sprintf (temp, "begin\n%s\nwhile\n%srepeat", $3.code, $5.code);
																			$$.code = gen_code(temp);}
				| IF expresion '(' PROGN sentencias ')' else_expresion  {sprintf (temp, "%s\nif\n%s%sthen", $2.code, $5.code, $7.code);
																			$$.code = gen_code(temp) ;}
				| RETURN-FROM IDENTIF expresion							{sprintf (temp, "%s", $3.code);
																			$$.code = gen_code(temp) ;}
				| IDENTIF maybe_arg										{sprintf (temp, "%s %s", $2.code, $1.code);
																			$$.code = gen_code(temp) ; }
				| SETQ IDENTIF expresion								{sprintf (temp, "variable %s\n", $2.code);
																			strcat(var_locales, temp);
																			sprintf (temp, "%s %s !", $3.code, $2.code);
																			$$.code = gen_code (temp) ; }
				;

asignacion: 	IDENTIF expresion 										{sprintf (temp, "%s %s !", $2.code, $1.code);
																			$$.code = gen_code(temp);}
				| 	'(' AREF IDENTIF expresion ')' expresion			{sprintf (temp, "%s %s %s cells + !", $6.code, $3.code, $4.code);
																			$$.code = gen_code(temp);}
				;

maybe_arg:		/*lambda*/											{ strcpy(temp, ""); 
																		$$.code = gen_code (temp) ; }
				| expresion											{sprintf (temp, "%s", $1.code);
																		$$.code = gen_code(temp) ; }
				;
else_expresion: /*lamba*/                               			{ strcpy(temp, ""); 
																		$$.code = gen_code (temp) ; }
				| '(' PROGN sentencias ')'                  		{sprintf (temp, "else\n%s", $3.code);
																		$$.code = gen_code(temp) ; }
				;

expresion:      termino                  							{ $$ = $1 ; }
				|   '(' '+' expresion  expresion ')'  				{ sprintf (temp, "%s %s +", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' '-' expresion  expresion ')'  				{ sprintf (temp, "%s %s -", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' '*' expresion  expresion ')'  				{ sprintf (temp, "%s %s *", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' '/' expresion  expresion ')'  				{ sprintf (temp, "%s %s /", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' '<' expresion  expresion ')'  				{ sprintf (temp, "%s %s <", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }   
				|   '(' '>' expresion  expresion ')'  				{ sprintf (temp, "%s %s >", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }                                           
				|   '(' AND expresion  expresion ')'  				{ sprintf (temp, "%s %s and", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' OR  expresion  expresion ')'  				{ sprintf (temp, "%s %s or", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' DIFF expresion  expresion ')'  				{ sprintf (temp, "%s %s = 0=", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   '(' '=' expresion  expresion ')'  				{ sprintf (temp, "%s %s =", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }  
				|   '(' LESSEQ expresion  expresion ')'  			{ sprintf (temp, "%s %s <=", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }    
				|   '(' MOREEQ expresion  expresion ')'  			{ sprintf (temp, "%s %s >=", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; } 
				|   '(' MOD expresion  expresion ')'  				{ sprintf (temp, "%s %s mod", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }                                       
			;

termino:        operando                           					{ $$ = $1 ; }                          
				|   '+' operando %prec UNARY_SIGN      				{ sprintf (temp, "%s", $2.code) ;
																		$$.code = gen_code (temp) ; }
				|   '-' operando %prec UNARY_SIGN      				{ sprintf (temp, "%s negate", $2.code) ;
																		$$.code = gen_code (temp) ; } 
				|   NOT operando %prec UNARY_SIGN  					{ sprintf(temp, "%s 0=", $2.code); 
																		$$.code = gen_code(temp) ; }  
				;

operando:       IDENTIF                  							{ sprintf (temp, "%s @", $1.code) ;
																		$$.code = gen_code (temp) ; }
				| '(' IDENTIF expresion ')'							{  sprintf (temp, "%s %s", $3.code, $2.code) ;
																		$$.code = gen_code (temp) ;}
				|  '(' AREF IDENTIF expresion ')'					{ sprintf (temp, "%s %s cells + @", $3.code, $4.code) ;
																		$$.code = gen_code (temp) ; }
				|   NUMBER                   						{ sprintf (temp, "%d", $1.value) ;
																		$$.code = gen_code (temp) ; }
				|   '(' expresion ')'        						{ $$ = $2 ; }
				;


%%                            // SECCION 4    Codigo en C

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
	"main",         MAIN,           // y los token asociados
	"setq",         SETQ,
	"defun",        DEFUN,
	"print",        PRINT,
	"prin1",        PRIN1,
	"setf",         SETF,
	"while",        WHILE,
	"loop",         LOOP,
	"do",           DO,
	"if",           IF,
	"progn",        PROGN,
	"or",  			OR, 
	"and",  		AND, 
	"/=",  			DIFF,
	"<=", 			LESSEQ, 
	">=",			MOREEQ,
	"mod",          MOD,
	"not",          NOT,
	"return-from",  RETURN-FROM,
	"make-array", 	MAKE-ARRAY,
	"aref",			AREF,
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
			(c >= '0' && c <= '9') || c == '_' || c == '-') && i < 255) {
			temp_str [i++] = tolower (c) ;
			c = getchar () ;
		}
		temp_str [i] = '\0' ;
		ungetc (c, stdin) ;

		yylval.code = gen_code (temp_str) ;
		symbol = search_keyword (yylval.code) ;
		if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//              printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
			return (IDENTIF) ;
		} else {
//              printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
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
