#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: input
 * @size: size
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	j = nmemb * size;
	for (i = 0; i < j; i++)
		s[i] = 0;
	return (s);
}
