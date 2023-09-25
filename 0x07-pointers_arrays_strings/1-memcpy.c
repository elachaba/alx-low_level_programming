#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to the memory area where we copy
 * @src: a pointer to the memory area from where we copy
 * @n: the number of bytes to copy
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
