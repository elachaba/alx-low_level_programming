#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the memory space allocated for  a linked list
 * @head: a pointer to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
