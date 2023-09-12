#include "main.h"

/**
 * _abs - computes the absloute value of an integer
 * @n: integer for which to get the absolute value
 *
 * Return: the absloute value of n
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		abs = n;
	}

	else
	{
		abs = (-1) * n;
	}

	return (abs);
}
