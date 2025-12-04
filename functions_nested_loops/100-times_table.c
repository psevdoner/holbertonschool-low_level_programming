#include "main.h"

/**
 * print_number - prints an integer using only _putchar.
 *
 * This function handles positive integers up to 999 (since n <= 15,
 * max result is 15 * 15 = 225).
 *
 * @n: The number to print.
 *
 * Return: void
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

/**
 * print_formatted_result - Prints the result with necessary spacing/comma.
 *
 * @result: The product (i * j).
 * @is_first: Flag indicating if it is the first number in the row (j == 0).
 *
 * Return: void
 */
void print_formatted_result(int result, int is_first)
{
	if (is_first)
	{
		print_number(result);
	}
	else
	{
		_putchar(',');
		_putchar(' ');

		if (result < 10)
		{
			_putchar(' ');
			_putchar(' ');
			print_number(result);
		}
		else if (result < 100)
		{
			_putchar(' ');
			print_number(result);
		}
		else
		{
			print_number(result);
		}
	}
}

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * If n is greater than 15 or less than 0 the function does nothing.
 *
 * @n: The number to generate the table for.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			/* Ayrılmış köməkçi funksiyanı çağırırıq */
			print_formatted_result(result, (j == 0));
		}
		_putchar('\n');
	}
}
