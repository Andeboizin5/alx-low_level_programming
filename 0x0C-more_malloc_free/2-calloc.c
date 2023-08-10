#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of members
 * @size: size
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(nmemb * size);

	if (pnt == NULL)
		return (NULL);

	j = nmemb * size;
	while (i < j)
	{
		pnt[i] = 0;
		i++;
	}

	return (pnt);
}
