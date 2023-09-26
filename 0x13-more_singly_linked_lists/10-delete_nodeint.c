#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head input
 * @index: index input
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *new_tmp = NULL;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (num < index - 1)
	{
		if (tmp != NULL || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		num++;
	}


	new_tmp = tmp->next;
	tmp->next = new_tmp->next;
	free(new_tmp);

	return (1);
}
