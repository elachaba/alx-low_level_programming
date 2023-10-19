#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: a pointer to the head of the linked list
 *
 * Return: the size of the linked list pointed by h
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
