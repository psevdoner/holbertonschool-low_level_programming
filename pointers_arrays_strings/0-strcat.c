#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Copy src to dest */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}

