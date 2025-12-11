#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to search
 * @accept: Pointer to string containing accepted characters
 *
 * Return: Number of bytes in initial segment of s
 *         consisting only of accept bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;

		/* Check if current character is in accept string */
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		/* If character not found in accept, stop counting */
		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
