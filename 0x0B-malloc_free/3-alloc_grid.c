#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-return a pointer to a 2 dimensional array of int
 * @width:int value
 * @height:int value
 * Return:int pointer to a pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	ptr = (int **)malloc(width * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);

}
