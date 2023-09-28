#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: the input number to which we calculate the factorial
 *
 * Return: factorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

