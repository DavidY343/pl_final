#include <stdio.h>
//clasico problema de fizzbuzz
int numeros[100];
int max = 100;

int p1 = 3;
int p2 = 5;
fizzbuzz()
{
	int i;
    for (i = 0; i < max; i = i + 1)
	{
        int num = numeros[i];

        if (num % p1 == 0 && num % p2 == 0)
		{
            puts("FizzBuzz "); 
        } 
		else
		{
			if (num % p1 == 0)
			{
				puts("Fizz ");
			}
			else
			{
				if (num % p2 == 0)
				{
					puts("Buzz ");
				}
				else
				{
					printf("%d %s", num, " ");
				}
			}
		}
    }
}
main()
{
    int i;

    for (i = 0; i < max; i = i + 1)
	{
        numeros[i] = i + 1;
    }
	fizzbuzz();
}

//@ (main)

