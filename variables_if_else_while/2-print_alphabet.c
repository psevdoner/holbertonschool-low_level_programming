#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int ch; /* bütün dəyişənləri funksiyanın əvvəlində elan edirik */

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

