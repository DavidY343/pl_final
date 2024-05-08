#include <stdio.h>

// Función recursiva para resolver las Torres de Hanoi
// AHora cuenta los movimientos que tarda en resolver siempre es:
// mov = 2^(n_discos) - 1

torres_de_hanoi(int n, int desde, int hacia, int auxiliar)
{
    if (n == 1)
	{
        return (1) ;
    }
	int mov = torres_de_hanoi(n - 1, desde, auxiliar, hacia) + 1 + torres_de_hanoi(n - 1, auxiliar, hacia, desde);
	return (mov); 
}

main()
{
	int n_discos = 3;
	printf("%s %d %s", "Pasos para resolver las Torres de Hanoi con ", n_discos, " discos:");
	puts("");


    int mov = torres_de_hanoi(n_discos, 1, 3, 2);  // Desde la torre 1 hasta la torre 3, usando la torre 2 como auxiliar

	printf("%s %d\n", "Número total de movimientos: ", mov);
}

//@ (main)
