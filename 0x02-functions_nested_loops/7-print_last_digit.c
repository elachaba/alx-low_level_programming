#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to which we need to find the last digit
 *
 * Return: the last digit of @n
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last *= -1;
	}
	_putchar('0' + last);
	return (last);
}
	
