#include <main.h>

/**
 * main - Entry point of the program
 *
 * Rerturn - 0
 */
int main(void)
{
	char string[] = "_putchar";

	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
