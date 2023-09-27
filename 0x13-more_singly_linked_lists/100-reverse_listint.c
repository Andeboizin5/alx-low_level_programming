#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head input
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr2 = NULL;
	listint_t *ptr = NULL;

	while (*head)
	{
		ptr = (*head)->ptr;
		(*head)->ptr = ptr2;
		ptr2 = *head;
		*head = ptr;
	}

	*head = ptr2;

	return (*head);
}
