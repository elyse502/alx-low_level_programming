#include "lists.h"
/**
 * list_len - Finds the number of elements in a list.
 * @h: Singly linked list.
 * Return: Number of elements in the list h.
 */

size_t list_len(const list_t *h)
{
	size_t NumberOfNodes;

	NumberOfNodes = 0;
	while (h != NULL)
	{
		h = h->next;
		NumberOfNodes++;
	}
	return (NumberOfNodes);
}
