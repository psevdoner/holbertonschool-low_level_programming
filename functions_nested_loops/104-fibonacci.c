#include <stdio.h>

void print_fib(void);

/**
 * main - entry point, prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fib();
	return (0);
}

/**
 * print_fib - prints the first 98 Fibonacci numbers
 */
void print_fib(void)
{
	int i;
	unsigned long a = 1, b = 2, a_h, a_l, b_h, b_l, h, l;
	unsigned long div = 1000000000000000000UL;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 98; i++)
	{
		if (a < div && b < div)
		{
			h = 0;
			l = a + b;
		}
		else
		{
			a_h = a / div;
			a_l = a % div;
			b_h = b / div;
			b_l = b % div;
			l = a_l + b_l;
			h = a_h + b_h;
			if (l >= div)
			{
				h++;
				l -= div;
			}
		}
		printf(", ");
		if (h == 0)
			printf("%lu", l);
		else
			printf("%lu%018lu", h, l);
		a = b;
		b = h * div + l;
	}
	printf("\n");
}

