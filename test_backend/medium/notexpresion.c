#include <stdio.h>


// Aqui comprobamos el operador not como operador unario
int j = 0;
int k = 1;

main()
{
	if (!j && !k)
	{
		puts("j y k es falso\n");
	}
	else 
	{
		if (!j || !k)
		{
			puts("j o k son falsos\n");
		}
		else
		{
			puts("Ninguna condición se cumplió\n");
		}
	}
}

//@ //@ main
//@ //@ bye



