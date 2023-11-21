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

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		for (i = 0; tmp && i < idx; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
