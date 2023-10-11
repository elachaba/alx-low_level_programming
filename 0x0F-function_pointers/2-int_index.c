#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array where we search
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare the value
 *
 * Return: the index of the element if it exists, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]))
		{
			return (idx);
		}
	}

	return (-1);
}
