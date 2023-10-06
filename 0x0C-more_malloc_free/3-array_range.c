#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the beginning of the range
 * @max: the end of the range
 *
 * Return: a pointer to the first element of an array of integers
 */

int *array_range(int min, int max)
{
	int i;

	int *array;

	array = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!array)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		array[i - min] = i;
	}

	return (array);
}
