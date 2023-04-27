#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Singly linked list.
 * Return: Number of elements in the list h.
 */

size_t print_list(const list_t *h)
{
	size_t Nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		Nodes++;
	}
	return (Nodes);
}
