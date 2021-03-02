#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: pointer to 2D arrays
 * @height: array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
	free(*(grid + height));

	height--;
	}

	free(grid);
}

