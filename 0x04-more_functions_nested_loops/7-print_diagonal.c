#include "main.h"

/**
 * print_diagonal - prints diagnole line in the terminal
 * @n: the number of '\'
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	int spaces;

	if (n <= 0)
	{
		_putchar('\n');

	}
	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i ; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
