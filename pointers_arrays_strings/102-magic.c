#include <stdio.h>

/**
 * main - Check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5] = {9, 8, 7, 6, 5};
	int *p;

	p = a + 1; /* p points to a[1] */

	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to use ,
	 * - you are not allowed to code anything else than the line
	 * of expected line of code at the expected line
	 */
	*(p + 1) = 98; /* This is the solution line */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
