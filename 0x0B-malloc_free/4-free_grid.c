#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function
 * @grid: grid of memories
 * @height: int
 * Return: void when Done
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
