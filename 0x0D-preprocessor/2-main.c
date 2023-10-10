#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program it was compiled from
 *
 * Return: EXIT_SUCCESS
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (EXIT_SUCCESS);
}
