#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of positive numbers followed by a new line
 *
 * @argc: the number of args in the command line
 * @argv: an array of pointer to the args
 *
 * Return: If an arg contains symbol that are not digit, -1
 * else 0
 */

int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i] != '\0'; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);

	return (EXIT_SUCCESS);
}
