#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *newnode;

	while (head)
	{
		newnode = head->next;
		free(head->str);
		free(head);
		head = newnode;
	}
}
