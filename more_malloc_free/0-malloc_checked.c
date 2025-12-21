#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * malloc fails, causes normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* 1. Yaddaş ayırmağa cəhd edirik */
	ptr = malloc(b);

	/* 2. Əgər malloc NULL qaytararsa (yaddaş çatmazsa) */
	if (ptr == NULL)
	{
		/* 3. Proqramı 98 statusu ilə dayandırırıq */
		exit(98);
	}

	/* 4. Uğurlu olarsa pointer-i qaytarırıq */
	return (ptr);
}
