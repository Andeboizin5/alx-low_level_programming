#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head input
 * @index: index input
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	for (num = 0; num < index; num++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
