#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the Number of Elements
 *               in a linked listint_t list.
 * @h: A pointer to the Head of the listint_t list.
 *
 * Return: The Number of Elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
