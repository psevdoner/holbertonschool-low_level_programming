#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Double pointer to the string pointer to modify
 * @to: Pointer to the string to set
 *
 * Description: Sets the pointer *s to point to the same string as to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
