#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* 1. Sətir pointerləri üçün yaddaş ayırırıq */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* 2. Hər sətir (sütunlar) üçün yaddaş ayırırıq */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		/* 3. Əgər bir srsuz olsa, əvvəlkiləri free edirik */
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		/* 4. Elementləri 0 ilə başladırıq */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
