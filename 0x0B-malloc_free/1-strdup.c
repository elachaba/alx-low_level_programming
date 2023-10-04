#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which is a duplicate of the string str.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicate of str
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, size;

	if (!str)
	{
		return (NULL);
	}

	size = 0;
	while (str[size])
	{
		size++;
	}

	dup = (char *)malloc(sizeof(char) * (size + 1));

	if (!dup)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
