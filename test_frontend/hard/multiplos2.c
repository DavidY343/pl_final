#include <stdio.h>

// Encuentra los multiplos de un numero con un limite de manera iterativa
// te devuelve cuantos numeros son

contar_multiplos(int numero, int limite)
{
    int actual = numero;
    int contador = 0;

    while (actual <= limite)
	{
        printf("%d ", actual, " ");
        actual = numero + actual;
        contador = contador + 1;
    }

    return contador; 
}

main()
{
    int numero = 5;
	int limite = 90;


    printf("%s %d %s %d", "Los múltiplos de ", numero, "hasta ", limite);
	puts("son: ");
    int total_multiplos = contar_multiplos(numero, limite);
	puts("");
    printf("\n%s%d\n", "Número total de múltiplos: ", total_multiplos);

    return 0;
}

//@ (main)


