#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head input
 * @index: the index of the node, starting from 0
 * Return: Always 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (num == index)
			return (current);

		current = current->next;
		num++;
	}
	return (NULL);
}
