#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: a pointer to the string to evaluate
 *
 * Return: len(s)
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
