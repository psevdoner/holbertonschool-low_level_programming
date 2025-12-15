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
	/* 1. Uğur Əsas Hal: Hər iki sətir eyni anda bitibsə, 1 qaytar. */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* 2. Normal Simvol Eşleşməsi */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* 3. s2-də '*' Karakteri Kontrolü */
	if (*s2 == '*')
	{
		/* A. Ardıcıl '*'ları atlama (Rekursiv yolla) */
		/* Eğer növbəti simvol da '*'dırsa, s2'ni bir daha irəlilət. */
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		/* B. Jokerin Nəyi Təmsil Etdiyini Yoxla (İki Rekursiv Yol) */
		/* Yol 1: '*' boş sətirdir. s2'də irəlilə (s2 + 1) VEYA */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* 4. Başarısız Hal: Simvollar uyğun gəlmir VƏ s2-də '*' yoxdur. */
	return (0);
}
