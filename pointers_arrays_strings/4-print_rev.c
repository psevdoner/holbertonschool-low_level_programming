#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: First, it determines the length of the string.
 * Then, it prints the characters starting from the last one
 * up to the first one, followed by a new line.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* 1. Sətrin uzunluğunu tapmaq */
	/* 'len' göstəricisini null terminatora qədər artırır */
	while (s[len] != '\0')
	{
		len++;
	}

	/* 2. Sətri tərsinə çap etmək */
	/* Son simvoldan (len - 1) başlayaraq, 0-a qədər geriyə dövr edir */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* 3. Yeni sətir əlavə etmək */
	_putchar('\n');
}
