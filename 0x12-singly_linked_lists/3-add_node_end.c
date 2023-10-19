#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node of a linked list
 * @head: a pointer to the head of the list
 * @str: the string of the node to insert
 *
 * Return: a pointer to the head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (!new)
		return (NULL);

	for (len = 0; str && str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (!curr)
	{
		*head = new;
		return (*head);
	}
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = new;
	return (*head);
}
