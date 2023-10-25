#include "lists.h"

/**
 * listint_len - computes the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the linked list pointed by h
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
