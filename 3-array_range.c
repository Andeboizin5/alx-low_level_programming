#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *j;

	if (min > max)
		return (NULL);

	j = malloc(sizeof(int) * (max - min + 1));

	if (j == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		j[i] = min++;

	return (j);
}
