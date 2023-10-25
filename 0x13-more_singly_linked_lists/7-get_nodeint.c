#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - fetches the node located at a certain index
 * @head: a pointer to the head of the list
 * @index: the index of the node to fetch
 *
 * Return: the node at index if it exists, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, len = 0;
	listint_t *curr = head;

	while (curr)
	{
		curr = curr->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	curr = head;
	for (i = 0; i != index; i++)
		curr = curr->next;

	return (curr);
}
