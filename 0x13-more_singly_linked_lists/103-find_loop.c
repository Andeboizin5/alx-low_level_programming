#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head input
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr2 = head;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	while (ptr2 && ptr && ptr->next)
	{
		ptr = ptr->next->next;
		ptr2 = ptr->next;
		if (ptr == ptr2)
		{
			ptr2 = head;
			while (ptr2 != ptr)
			{
				ptr2 = ptr2->next;
				ptr = ptr->next;
			}
			return (ptr);
		}
	}

	return (NULL);
}
