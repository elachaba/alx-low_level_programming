#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: the number of elements of the array
 * @size: the size of each element of the array
 *
 * Return: a void * pointer to the memory space allocted
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	unsigned int i;

	if (nmemb * size == 0)
	{
		return (NULL);
	}

	arr = (void *)malloc(nmemb * size);
	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return ((void *)arr);
}
