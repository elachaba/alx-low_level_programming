#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array of integers to be the parameters.
 * @size: size of the array.
 * @action: the function to be executed.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t idx;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (idx = 0; idx < size; idx++)
	{
		action(array[idx]);
	}
}
