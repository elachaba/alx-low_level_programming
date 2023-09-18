#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to the first int to be swapped
 * @b: a pointer to the second integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
