#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - adds a node at the head of a linked list
 * @head: a pointer to the head of the linked list
 * @n: the integer to store in the new node
 *
 * Return:. a pointer to the new head of the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
