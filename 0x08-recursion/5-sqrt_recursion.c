#include "main.h"


int compute_root(int n, int sqt);

/**
 * _sqrt_recursion - computes the square root of an integer
 * @n: the integer input
 *
 * Return: if n < 0 --> -1, else the sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (compute_root(n, 0));
}

/**
 * compute_root - calculates the square root of n
 * @n: the integer input
 * @sqt: a checker that will eventually take the value of sqrt n
 *
 * Return: the sqrt of n
 */

int compute_root(int n, int sqt)
{
	if (sqt * sqt > n)
	{
		return (-1);
	}
	if (sqt * sqt == n)
	{
		return (sqt);
	}
	return (compute_root(n, sqt + 1));
}

