#include "main.h"

/**
 * print_line - prints a line to the terminal
 * @n: the length of the line; i.e the number of _
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
