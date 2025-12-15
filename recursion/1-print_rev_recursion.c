#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, using recursion.
 * @s: The string to be printed in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Temel Durum (Base Case): Dizenin sonuna ulaşıldı (null karakter) */
	if (*s == '\0')
	{
		return;
	}

	/* Özyinelemeli Adım (Recursive Step): */

	/* 1. Fonksiyonu dizideki bir sonraki karakter için tekrar çağır. */
	_print_rev_recursion(s + 1);

	/* 2. Geri dönüş yolunda, mevcut karakteri yazdır. */
	_putchar(*s);
}
