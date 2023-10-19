#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the head of a given linked list
 * @head: a pointer the head of the list to modify
 * @str: the string of the node to add to the linked list
 *
 * Return: a pointer to the new head of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len;

	if (!new)
		return (NULL);

	for (len = 0; str && str[len]; len++)
		;
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	*head = new;
	return (*head);
}
