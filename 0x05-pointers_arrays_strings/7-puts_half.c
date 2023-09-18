#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2; i = len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
