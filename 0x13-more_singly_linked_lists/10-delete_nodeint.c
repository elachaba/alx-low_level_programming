#include "lists.h"
#include <stdlib.h>


#define SUCCESS 1
#define FAILURE -1

/**
 * delete_nodeint_at_index - deletes a node at given index
 * from a linked list
 * @head: a pointer to the head of the node
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *curr;

	if (!head || !(*head))
		return (FAILURE);
	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (SUCCESS);
	}
	prev = curr;
	curr = curr->next;
	i = 0;
	while (i < index - 1)
	{
		if (!prev || !curr)
			return (FAILURE);
		prev = curr;
		curr = curr->next;
		i++;
	}
	prev->next = curr->next;
	free(curr);
	return (SUCCESS);
}

