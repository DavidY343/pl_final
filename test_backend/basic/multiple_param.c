#include <stdio.h>
// Probando que reconoce multiples declaraciones tanto dentro como fuera de funciones

int i, b;
int j = 0, h, l = 5;

main ()
{
	int i, b;
	int j = 0, h, l = 5;
	h = 3; b = 2; i = 1;
	printf("%s %d %d", "Agua", j, l);
	printf("%d %d %s %d", h, b, "fuego", i);
}
//@ //@ main
//@ //@ bye



