#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long a1 = 1, a2 = 2, a1_h = 0, a2_h = 0;
	unsigned long h, l;
	unsigned long div = 1000000000000000000UL;

	printf("%lu, %lu", a1, a2);

	for (i = 3; i <= 98; i++)
	{
		l = a1 + a2;
		h = a1_h + a2_h;

		if (l >= div)
		{
			l -= div;
			h += 1;
		}

		printf(", ");
		if (h == 0)
			printf("%lu", l);
		else
			printf("%lu%018lu", h, l);

		a1 = a2;
		a1_h = a2_h;
		a2 = l;
		a2_h = h;
	}

	printf("\n");
	return (0);
}

