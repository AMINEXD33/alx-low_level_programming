#include "main.h"
#include "stdlib.h"
/**
 *free_grid - free a 2d array of a height 
 *@grid: is the 2d array
 *@height: the height
 */
void free_grid(int **grid, int height)
{
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
