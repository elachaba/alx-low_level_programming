#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9 to stdout
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_puthchar('\n');
}
