#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 *
 * Description: First, it calculates the length of the string.
 * Then, it swaps characters from the start and end of the string
 * moving inwards until the middle is reached.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	/* 1. Sətrin uzunluğunu tapmaq */
	/* len null terminatora çatanda sətrin uzunluğu olur */
	while (s[len] != '\0')
	{
		len++;
	}

	/* 2. Sətri tərsinə çevirmək (Yerindəcə - In-place) */
	/* Dövrü sətrin yarısına qədər (len / 2) davam etdiririk. */
	/* Bu, simvolları iki dəfə dəyişmənin qarşısını alır. */
	for (i = 0; i < len / 2; i++)
	{
		/* Başlanğıc simvolu temp-də saxla */
		temp = s[i];

		/* Son simvolu (len - 1 - i) başlanğıc mövqeyinə köçür */
		s[i] = s[len - 1 - i];

		/* Müvəqqəti simvolu son mövqeyinə köçür */
		s[len - 1 - i] = temp;
	}
}
