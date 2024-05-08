#include <stdio.h>

// Función que realiza la cuenta regresiva desde un número dado
// Comprobamos que se puede llamar a la funcion con un parametro, hacemos uso de la funcion while para saber si funciona
countdown(int start)
{
	int i = start;

    while (i >= 0)
	{
        printf("%d %s", i, " ");
		i = i - 1;
    }
    printf("%s", "¡Tiempo terminado!\n");
}

main()
{
    int start = 10;
    
    countdown(start);
}
//@ (main)

