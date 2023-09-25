#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to find
 *
 * Return: a pointer to the first occurence of the character c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ('\0');
}
