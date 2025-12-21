#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Əgər massiv mövcud deyilsə, heç nə etmirik */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Hər bir sətiri (yaddaşın daxili hissələrini) azad edirik */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Sətir pointerlərini saxlayan əsas massivi azad edirik */
	free(grid);
}
