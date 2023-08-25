#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the list_t
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
