#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _reverse - Reverses a string
 * @s: String to reverse
 * @len: Length of the string
 */
void _reverse(char *s, int len)
{
	int start = 0;
	int end = len - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers
 * @n1: First number as string
 * @n2: Second number as string
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result or 0 if error
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, k, sum, carry = 0;

	/* Get lengths of input strings */
	len1 = _strlen(n1);
	len2 = _strlen(n2);

	/* Check if result can potentially fit */
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return (0);

	/* Initialize indices */
	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	/* Perform addition from rightmost digits */
	while (i >= 0 || j >= 0 || carry)
	{
		/* Check buffer bounds */
		if (k >= size_r - 1)
			return (0);

		/* Calculate sum of current digits */
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		/* Store digit and update carry */
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}

	/* Null terminate and reverse the result */
	r[k] = '\0';
	_reverse(r, k);

	return (r);
}
