#include "stdlib.h"

/**
 * free_grid - function with two arguments
 * @grid: int type double pointer
 * @height: int type
 *
 * Description: frees a 2 dimensional grid
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
