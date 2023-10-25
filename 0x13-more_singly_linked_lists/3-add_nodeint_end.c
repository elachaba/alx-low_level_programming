#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to a linked list at the end
 * @head: a pointer to the head of the linked list
 * @n: the integer of the node to insert
 *
 * Return: a pointer to the head of the linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
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

