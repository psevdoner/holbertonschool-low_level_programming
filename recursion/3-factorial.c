#include "main.h"

/**
 * factorial - Returns the factorial of a given non-negative number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n. Returns -1 if n is negative (error).
 */
int factorial(int n)
{
	/* 1. Hata Kontrolü (Error Check): n negatifse -1 döndürülür. */
	if (n < 0)
	{
		return (-1);
	}

	/* 2. Temel Durum (Base Case): 0'ın faktöriyeli 1'dir. */
	if (n == 0)
	{
		return (1);
	}

	/* 3. Özyinelemeli Adım (Recursive Step): n * factorial(n - 1) */
	/* Bu, n * (n-1) * (n-2) * ... * 1 çarpımını hesaplar. */
	return (n * factorial(n - 1));
}
