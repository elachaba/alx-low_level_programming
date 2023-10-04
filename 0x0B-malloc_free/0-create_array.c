#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: the size of the string
 * @c: the char to store
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(c) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}

