#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len, up;

	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	up = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[up];
		s[up--] = tmp;
	}
}

