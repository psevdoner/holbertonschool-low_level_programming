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
	/* 1. Temel Durum 1: Her iki dize de sona erdiyse (Eşleşme Tamamlandı) */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* 2. Joker Karakter Kontrolü: s2'nin mevcut karakteri '*' ise */
	if (*s2 == '*')
	{
		/* A. '*' karakteri bittiyse (s2'deki sonraki karakter null ise) */
		/* s1'in geri kalan kısmı ne olursa olsun eşleşir. */
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}

		/* B. İki Rekursif Yol Denenir (Önemli Adım): */
		/* Yol 1: '*' boş bir dizeyi temsil eder. */
		/* s1'de kal, s2'de '*'dan sonraki karaktere ilerle (s2 + 1). */
		/* VEYA (||) */
		/* Yol 2: '*' bir karakteri temsil eder. */
		/* s1'de bir karakter ilerle (s1 + 1), s2'de '*'da kal. */
		/* (Bu, '*'ın birden fazla karakteri temsil etmesini sağlar.) */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* 3. Normal Karakter Kontrolü: s1 ve s2'deki karakterler eşleşiyorsa */
	if (*s1 == *s2)
	{
		/* Her iki dizede de bir sonraki karaktere ilerle. */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* 4. Temel Durum 2 (Başarısızlık): Eşleşme yok ve '*' yok */
	/* (Bu, *s1 != *s2 olduğu ve *s2 != '*' olmadığı anlamına gelir.) */
	/* Veya s1 bitti (*s1 == '\0') ama s2 bitmedi. */
	return (0);
}
