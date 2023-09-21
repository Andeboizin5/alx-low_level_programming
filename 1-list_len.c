#include "lists.h"
#include <stdlib.h>

/**
 * list_len - adds a new node at the beginning of a list_t list
 * @h: pointer to the list_t list
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
