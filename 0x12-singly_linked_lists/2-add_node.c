#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head input
 * @str: string input
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *newnode;

	while (str[i])
		i++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->i = i;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
