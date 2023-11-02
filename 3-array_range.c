#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum input
 * @max: maximum input
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *s;
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	s = malloc(sizeof(int) * j);
	if (s == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		s[i] = min++;

	return (s);
}
