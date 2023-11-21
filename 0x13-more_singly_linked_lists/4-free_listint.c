#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head input
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}