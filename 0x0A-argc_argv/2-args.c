#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: the number of arguments
 * @argv: an array of pointers to the strings representing the args
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (EXIT_SUCCESS);
}
