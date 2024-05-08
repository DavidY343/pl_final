#include <stdio.h>
// Probando que el printf acepta uno o varios parametros y que solo printea los parametros no la string
// tambien acepta expresiones Y STRINGS	

int i;

main ()
{
	int j = 3;
	i = 4;
	printf("", i, " ");
	printf("Hola mundo", j, " ", i, " ");
	printf("Aguaa%d", 4 * 5, " ", 7 - 3, " ");
	printf("Aguaa%d", "4 * 5 ", "7 - 3 ");
}
//@ (main)

