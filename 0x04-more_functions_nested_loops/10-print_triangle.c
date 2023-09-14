#include "main.h"

/**
 * print_triangle - prints a triangle to the terminal
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	int i;

	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

