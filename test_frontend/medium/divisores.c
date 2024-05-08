#include <stdio.h>

// Función que verifica si 'divisor' es divisor de 'number'

es_divisor(int divisor, int number)
{
    return (number % divisor) == 0;
}

main()
{
    int numero1 = 20, numero2 = 3;

    if (es_divisor(numero1, numero2))
	{
        printf("%d %s %d", numero1, " es divisor de ", numero2);
    } 
	else 
	{
        printf("%d %s %d", numero1, " no es divisor de ", numero2);
    }

    return 0;
}

//@ (main)


