#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: a pointer to the first value of the matrix
 * @size: the size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_1, sum_2;

	sum_1 = 0;
	sum_2 = 0;
	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + i + size * i);
		sum_2 += *(a + size - 1 - i + size * i);
	}
	printf("%d, %d\n", sum_1, sum_2);
}
