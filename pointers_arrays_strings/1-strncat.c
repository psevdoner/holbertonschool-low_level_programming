#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes from src to append
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append at most n bytes from src */
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	/* Add null terminator */
	dest[i + j] = '\0';

	return (dest);
}

