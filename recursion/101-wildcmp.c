#include "main.h"

/**
 * wildcmp - Compares two strings, considering '*' as a wildcard.
 * @s1: The first string (regular).
 * @s2: The second string (may contain '*').
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* 1. Her İki Dize de Sona Erdiyse: Mükemmel Eşleşme */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* 2. s2'de '*' Karakteri Kontrolü */
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		/* A. '*' karakteri bittiyse (s2'deki sonraki karakter null ise) */
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}

		/* B. İki Yönlü Rekürsiyon (s2 + 1 veya s1 + 1): */
		/* '*' boş dizeyi temsil eder (s2'de ilerle) VEYA */
		/* '*' bir karakteri temsil eder (s1'de ilerle, s2'de kal) */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* 3. Normal Karakter Eşleşmesi */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* 4.  (s1 bittiğinde s2'de '*' dışında karakter varsa da dahil) */
	return (0);
}
