#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **dth;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dth = malloc(sizeof(int *) * height);

	if (dth == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dth[i] = malloc(sizeof(int) * width);
		if (dth[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dth[i]);

			free(dth);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dth[i][j] = 0;
	}
	return (dth);
}
