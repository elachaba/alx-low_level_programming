#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string result
 * @src: does not need to be null-terminated if it contains n or more bytes
 * @n: the number of bytes to concatenate at most
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
