#include <stdio.h>


// Aqui comprobamos que todos los operadores tanto logicos como los que no son logicos funcionan
// Ademas planteamos un monton de casos con if y else y solo if 
// Este es un pequeño programa que conambiando los valores k y j ves todo los flujos
// Con j = 21 y k = 18 ves el flujo de operacion2 por ejemplo
int j = 1;
int k = 1;

operacion1()
{

    if (j <= k)
	{
        puts("j es menor o igual que k\n");
    }

    if (j >= k)
	{
        puts("j es mayor o igual que k\n");
    }

    if (j != k && j == 7)
	{
        puts("j es diferente de k y j es == 7\n");
    }
}

operacion2()
{
    if (j % 2 == 1 || k % 2 == 0)
	{
        puts("j es impar o k es par\n");
    }
}

operacion3()
{
    if (j >= 5 && k > 3 && (j - k) == 2)
	{
        puts("j es mayor que 5, k es mayor que 3, y la diferencia entre j y k es 2\n");
    }
}

main()
{
	if ((j + k) > 40)
	{
        puts("La suma de j y k es mayor que 40\n");
        operacion1();
    }
	else 
	{	if ((j * k) > 100)
		{
			puts("El producto de j y k es menor que 10\n");
			operacion2();
		}
		else
		{
			puts("Ninguna condición se cumplió\n");
			operacion3();
		}
	}
}

//@ (main)

