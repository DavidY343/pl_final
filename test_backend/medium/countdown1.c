#include <stdio.h>

// Función que realiza la cuenta regresiva desde un número dado
// Comprobamos que se puede llamar a la funcion con un parametro, hacemos uso de la funcion for para saber si funciona
countdown(int start)
{
	int i;

    for (i = start; i >= 0; i = i - 1)
	{
        printf("%d %s", i, " ");
    }
    printf("%s", "¡Tiempo terminado!");
}

main()
{
    int start = 10;
    
    countdown(start);
}

//@ //@ main
//@ //@ bye



