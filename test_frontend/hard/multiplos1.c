#include <stdio.h>

// Encuentra los multiplos de un numero con un limite de manera recursiva

encontrar_multiplos(int numero, int limite, int actual)
{
    if (actual > limite)
	{
        return (2);
    }
    
    printf("%d ", actual, " ");
    
    return (encontrar_multiplos(numero, limite, actual + numero));
}

main()
{
    int numero = 5;
	int limite = 90;


    printf("%s %d %s %d", "Los múltiplos de ", numero, "hasta ", limite);
	puts("son: ");
    int residuo = encontrar_multiplos(numero, limite, numero);
}

//@ (main)

