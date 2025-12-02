#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: Numbers are separated by comma and space
 *              Last number is always 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	/* Artan sıra: n 98-dən kiçikdirsə */
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	/* Azalan sıra: n 98-dən böyükdürsə */
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
