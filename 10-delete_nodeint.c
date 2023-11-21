#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: head input
 * @index: index input
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	node = tmp->next;
	tmp->next = node->next;
	free(node);
	return (1);
}
