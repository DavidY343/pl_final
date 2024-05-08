#include <stdio.h>

// Función que verifica si 'divisor' es divisor de 'number'
int divisor = 20;
int number = 3;

es_divisor()
{
    return (number % divisor) == 0;
}

main()
{
    if (es_divisor())
	{
        printf("%d %s %d", divisor, " es divisor de ", number);
    } 
	else 
	{
        printf("%d %s %d", divisor, " no es divisor de ", number);
    }

    return 0;
}

//@ (main)


