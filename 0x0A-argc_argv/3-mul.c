#include <stdlib.h>
#include <stdio.h>


/**
 * main - prints the multiplication of two numbers
 * passed in the arguments
 * @argc: number of arguments
 * @argv: an array of pointers to the strings represeting te args
 *
 * Return: EXIT_SUCCESS if mult is done, else EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	prod = a * b;
	printf("%d\n", prod);
	return (EXIT_SUCCESS);
}

