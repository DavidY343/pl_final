#include <stdio.h>

// Función que realiza la cuenta regresiva desde un número dado
// Version definitiva probamos todo

countdown_aux(int start)
{
	int i;

    for (i = start; i >= 0; i = i - 1)
	{
        printf("%d %s", i, " ");
    }
    puts("¡Tiempo terminado!\n");
}
countdown(int start)
{
	int i = start;

    while (i >= 10)
	{
        printf("%d %s", i, " ");
		i = i - 1;
    }
	countdown_aux(i);
}

main()
{
    int start = 20;
    
    countdown(start);
}
//@ //@ main
//@ //@ bye



