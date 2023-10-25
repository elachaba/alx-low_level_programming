#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Write a function that prints all the element
 * of a listint_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: The size of the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
