#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	/* 0-9 */
	for (i = 0; i <= 9; i++)
		putchar(i + '0');  /* 1st putchar */

	/* a-f */
	for (i = 0; i <= 5; i++)
		putchar(i + 'a');  /* 2nd putchar */

	putchar('\n');         /* 3rd putchar: yeni sətir */

	return (0);
}

