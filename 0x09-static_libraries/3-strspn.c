#include "main.h"

/**
 * _strspn - geths the length of a prefix substring.
 * @s: the string to check
 * @accept: the substring to search for.
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int size;

	int i;

	size = 0;
	while (*s)
	{
		for (i = 0;  accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				size++;
				break;
			}

			else if (accept[i + 1] == '\0')
			{
				return (size);
			}
		}
		s++;

	}

	return (size);
}
