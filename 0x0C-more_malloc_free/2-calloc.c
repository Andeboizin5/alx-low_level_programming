#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	a = nmemb * size
	ptr = malloc(a);

	if (ptr == NULL)
		return (NULL);

	while (i < a)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
