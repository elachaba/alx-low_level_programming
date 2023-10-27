#include "main.h"

/**
 * print_binary - prints the binray representation of a number
 * @n: the intege to print.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int tmp;

	for (i = 63; i >= 0; i--)
	{
		tmp = n >> i;
		if (tmp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
