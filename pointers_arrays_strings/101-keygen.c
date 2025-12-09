#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid password for 101-crackme
 * Return: Always 0
 */
int main(void)
{
	char pwd[84];
	int i = 0, sum = 0, diff, target = 2772;

	srand(time(NULL));

	while (sum < target - 126)
	{
		pwd[i] = rand() % 94 + 33;
		sum += pwd[i];
		i++;
	}

	diff = target - sum;

	if (diff >= 33 && diff <= 126)
	{
		pwd[i] = diff;
		i++;
	}
	else
	{
		pwd[i] = 126;
		i++;
		pwd[i - 1] = diff - 126;
	}

	pwd[i] = '\0';
	printf("%s", pwd);

	return (0);
}
