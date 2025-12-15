#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The total number of command line arguments.
 * @argv: An array of command line arguments (unused).
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	/* Unused parameter uyarısını bastır */
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
