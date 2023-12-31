#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid- allocated a 2D array
 *@width: width of the array
 *@height: height of the array
 *Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **Mem;
	int x;
	int y;


	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocation the height of the array*/
	Mem = malloc((sizeof(int *) * height));
	if (Mem == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		/*allocating the width of each unit of hight*/
		Mem[x] = malloc(sizeof(int) * width);
		if (Mem[x] == NULL)
		{
			/*free and return NULL*/
			while (x >= 0)
			{
				free(Mem[x]);
				x--;
			}
			free(Mem);
			return (NULL);
		}
		/*initialize the with to hold 0*/
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			Mem[x][y] = 0;
		}
	}

	return (Mem);
}
