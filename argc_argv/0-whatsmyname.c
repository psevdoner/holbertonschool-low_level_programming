#include <stdio.h>

/**
 * main - Prints the name of the program (including the path).
 * @argc: The number of command-line arguments (unused).
 * @argv: An array of command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
