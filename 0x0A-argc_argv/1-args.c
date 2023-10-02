#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments to the stdout
 * @argc: the number of arguments
 * @argv: the list of arguments
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}
