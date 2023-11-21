#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head input
 * @idx: index input
 * @n: input
 * Return: Always 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *tmp = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL || head == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
