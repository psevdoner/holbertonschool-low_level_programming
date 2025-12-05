#include <stdio.h>

/**
 * main - finds and prints the sum of even Fibonacci terms ≤ 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int next;
	long int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;

		next = a + b;
		a = b;
		b = next;
	}

	printf("%ld\n", sum);

	return (0);
}

