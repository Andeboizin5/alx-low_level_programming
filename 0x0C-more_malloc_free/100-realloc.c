#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer input
 * @old_size: old_size input
 * @new_size: new_size input
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j = new_size;
	char *s;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		s[i] = oldp[i];
	free(ptr);
	return (s);
}
