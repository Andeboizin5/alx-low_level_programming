#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **chr;
	int i, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	chr = malloc(sizeof(int *) * height);

	if (chr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		chr[i] = malloc(sizeof(int) * width);

		if (chr[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
				free(chr[i]);

			free(chr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			chr[i][j] = 0;
	}

	return (chr);
}
