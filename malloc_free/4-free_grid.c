#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional.
 * @grid: Pointer element.
 * @height: Element.
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
