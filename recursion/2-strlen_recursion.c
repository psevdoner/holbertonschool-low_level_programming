#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Temel Durum (Base Case): Dizenin sonuna ulaşıldı */
	if (*s == '\0')
	{
		/* Null karakter için uzunluk 0'dır. */
		return (0);
	}

	/* Özyinelemeli Adım (Recursive Step): */
	/* 1. Kalan dizenin uzunluğunu bulmak için kendimizi çağırırız. */
	/* 2. Mevcut karakter için 1 ekleriz. */
	return (1 + _strlen_recursion(s + 1));
}
