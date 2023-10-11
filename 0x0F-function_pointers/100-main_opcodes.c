#include <stdlib.h>
#include <stdio.h>

/**
 * opcodes - prints the opcodes of the main
 * @a: the address of the main function
 * @nb: number of bytes
 *
 * Return: void
 */

void opcodes(char *a, int nb)
{
	int idx;

	for (idx = 0; idx < nb; idx++)
	{
		printf("%.2hhx", a[idx]);
		if (idx < nb - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	int nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes((char *)main, nb);
	return (EXIT_SUCCESS);
}

