#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a certain index
 * @head: a pointer to a pointer to th head of the list
 * @idx: is the position of the new node
 * @n: the data to put in the new node
 *
 * Return: the address of the new node, if failed return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *curr;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	curr = *head;

	for (i = 0; curr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
	}
	return (NULL);
}


