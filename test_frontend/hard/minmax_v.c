#include <stdio.h>

// FUncoin que encuentra el maximo y el min en un vector
int vector[100];
int n;    

find_max(int n)
{
	int maximo = vector[0];
	int i = 0;
	while(i < n)
	{   
		if (vector[i] > maximo)
		{
            maximo = vector[i];
        }
		i = i + 1;
	}
	return maximo;
}

find_min(int n)
{
	int minimo = vector[0];
	int i = 0;
	while(i < n)
	{   
		if (vector[i] < minimo)
		{
            minimo = vector[i];
        }
		i = i + 1;
	}
	return minimo;
}


main()
{
    int i;

    n = 10;
    for (i = 0; i < n; i = i + 1)
	{
        vector[i] = (i + 1) * 2;
    }

	int maximo = find_max(n);
	int minimo = find_min(n);

    puts("Contenido del vector: ");
    for (i = 0; i < n; i = i + 1)
	{
        printf("%d %s", vector[i], " ");
    }
    puts("fin");

    // Imprime el máximo y mínimo encontrados
    printf("%s %d\n", "Max; ", maximo);
	puts("y");
    printf("%s %d\n", "Min; ", minimo);

    return 0;
}

//@ (main)

