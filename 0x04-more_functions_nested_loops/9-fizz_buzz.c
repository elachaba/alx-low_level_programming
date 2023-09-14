#include "main.h"
#include <stdio.h>

/**
 * main - from 1 to 100, fizz for 3*k, buzz for 5*k and fizzbuzz for 15*k
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
