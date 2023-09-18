#include "main.h"

/**
 * puts2 - prints one char out of two of a string unto the stdout
 * @str: string to print the chars from
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
