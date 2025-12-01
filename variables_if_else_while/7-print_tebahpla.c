#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);  /* 1st putchar: z-dən a-ya hərflər */

	putchar('\n');    /* 2nd putchar: yeni sətir */

	return (0);
}

