#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to a pointer to the head of the linked list
 *
 * Return: the content of the popped node
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *curr_head = *head;

	if (curr_head)
	{
		n = (curr_head)->n;
		*head = curr_head->next;
		free(curr_head);
	}
	return (n);
}
