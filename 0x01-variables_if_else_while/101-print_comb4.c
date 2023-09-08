#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	int i;

	int j;

	int z = 0;

	while (z < 10)
	{
		j = 0;
		while (j < 10)
		{
			i = 0;
			while (i < 10)
			{
				if (i != j && j != z && z < j && j < i)
				{
					putchar('0' + z);
					putchar('0' + j);
					putchar('0' + i);

					if (i + j + z != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			j++;
		}
		z++;
	}
	putchar('\n');
	return (0);
}


