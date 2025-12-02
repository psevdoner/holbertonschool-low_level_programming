#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, result;
	char digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			
			/* Print result with proper formatting */
			if (j != 0)
			{
				write(1, ", ", 2);
				if (result < 10)
					write(1, " ", 1);
			}
			
			/* Print tens digit if needed */
			if (result >= 10)
			{
				digit = (result / 10) + '0';
				write(1, &digit, 1);
			}
			
			/* Print ones digit */
			digit = (result % 10) + '0';
			write(1, &digit, 1);
		}
		write(1, "\n", 1);
	}
}
