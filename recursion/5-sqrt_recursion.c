#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of n. Returns -1 if n has no natural
 * square root or if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	/* n'nin 1'den büyük olduğu durumda, aramaya 2'den başlanır. */
	return (find_sqrt(n, 2));
}

/**
 * find_sqrt - Recursively finds the natural square root of n.
 * @n: The number to find the square root of.
 * @i: The current number being checked as a potential root.
 *
 * Return: The natural square root, or -1 if not found.
 */
int find_sqrt(int n, int i)
{
	/* 1. Başarılı Temel Durum (Base Case - Success): */
	/* i'nin karesi n'ye eşitse, i doğal kareköktür. */
	if (i * i == n)
	{
		return (i);
	}

	/* 2. Başarısız Temel Durum (Base Case - Failure): */
	/* i'nin karesi n'yi aşarsa, n'nin doğal karekökü yoktur. */
	if (i * i > n)
	{
		return (-1);
	}

	/* 3. Özyinelemeli Adım (Recursive Step): */
	/* Deneme değerini artırarak özyinelemeye devam et. */
	return (find_sqrt(n, i + 1));
}
