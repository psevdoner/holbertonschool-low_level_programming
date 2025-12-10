#include "main.h"

/**
 * _strncpy - Copies a string, works exactly like strncpy
 * @dest: Destination buffer
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If src is shorter than n, pad dest with '\0' */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

