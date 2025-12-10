#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize first character if it's lowercase letter */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		int j;
		int sep_found = 0;

		/* Check if the previous character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i - 1] == separators[j])
			{
				sep_found = 1;
				break;
			}
		}

		/* Capitalize current character if it's lowercase and after a separator */
		if (sep_found && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}

