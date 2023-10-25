#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the memory space allocated for a linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	tmp = *head;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}

