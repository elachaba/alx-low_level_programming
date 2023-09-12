#include "main.h"

/**
 * print_sign - prunts the sign of a number
 * @n: the number to be processed
 *
 * Return: 1 if n>0, 0 if n==0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if ( n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}


