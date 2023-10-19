#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees th allocated memory for a linked list list_t
 * @head: a pointer to the head of the linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
