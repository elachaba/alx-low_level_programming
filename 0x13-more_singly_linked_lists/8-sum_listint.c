#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - computes the sum of all the data stored
 * in the linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the sum of a all the data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
