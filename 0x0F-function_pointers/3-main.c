#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - reads the operation from the stdin and calls the
 * function to execute it.
 * @argc: the number of arguments must be equal to 4
 * @argv: the array of arguments passed in the command line
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int a, b;

	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(a, b));
	return (EXIT_SUCCESS);
}
