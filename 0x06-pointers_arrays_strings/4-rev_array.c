#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array to reverse
 * @n: the length of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
