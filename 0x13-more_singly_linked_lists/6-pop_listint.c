#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: input
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head != NULL || *head != NULL)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
