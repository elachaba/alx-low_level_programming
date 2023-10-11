#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - calculates the sum of two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of the division of 2 integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - computes the remainder of the division of two integers.
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of a / b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
