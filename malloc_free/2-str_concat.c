#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* 1. NULL keçilərsə boş sətir kimi rəftar et */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. Sətirlərin uzunluğunu hesabla */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* 3. Malloc ilə cəm uzunluq + 1 (terminator üçün) yer ayır */
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	/* 4. Malloc xətasını yoxla */
	if (concat_str == NULL)
		return (NULL);

	/* 5. Birinci sətiri kopyala */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* 6. İkinci sətiri kopyala */
	for (j = 0; j < len2; j++, i++)
		concat_str[i] = s2[j];

	/* 7. Sona null terminatoru qoy */
	concat_str[i] = '\0';

	return (concat_str);
}
