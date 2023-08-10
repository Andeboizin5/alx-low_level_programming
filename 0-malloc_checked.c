#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - that allocates memory using malloc
 * @b: number
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pnt;

	pnt = malloc(b);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}
