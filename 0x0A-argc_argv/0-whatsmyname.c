#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program to the stdout
 * @argc: an integer representing the number of arguments passed
 * to the program
 * @argv: a list of pointers to the strings (arguments)
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (EXIT_SUCCESS);
}
