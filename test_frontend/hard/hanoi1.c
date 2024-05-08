#include <stdio.h>

// Función recursiva para resolver las Torres de Hanoi

torres_de_hanoi(int n, int desde, int hacia, int auxiliar)
{
    if (n == 1)
	{ 
        printf("%s %d %s %d", "Mover disco 1 de torre ", desde, "a torre ", hacia);
		puts("");
        return 1 ;
    }

    torres_de_hanoi(n - 1, desde, auxiliar, hacia);

	printf("%s %d %s %d %s %d", "Mover disco ", n, "de torre", desde, "a torre ", hacia);
	puts("");
	
    torres_de_hanoi(n - 1, auxiliar, hacia, desde);
}

main()
{
	int n_discos = 3;
	printf("%s %d %s", "Pasos para resolver las Torres de Hanoi con ", n_discos, " discos:");
	puts("");


    torres_de_hanoi(n_discos, 1, 3, 2);  // Desde la torre 1 hasta la torre 3, usando la torre 2 como auxiliar

    return 0;
}

//@ (main)
