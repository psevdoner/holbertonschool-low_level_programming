#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
			if (n == 1)
			{
				printf("%ld\n", i);
				return (0);
			}
		}
	}

	return (0);
}

