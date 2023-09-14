#include <stdio.h>

/**
 * main - calculates the largest prime divider of 6128522475143
 *
 * Return - 0
 */

int main(void)
{
	long int num = 612852475143;

	long int prime;

	long int div;

	for (div = 2; div <= num / 2; div++)
	{
		while (num % div == 0)
		{
			prime = div;
			num = num / div;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
