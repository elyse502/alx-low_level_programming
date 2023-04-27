#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: No return.
 */

void free_list(list_t *head)
{
	list_t *Last_node;

	while ((Last_node = head) != NULL)
	{
		head = head->next;
		free(Last_node->str);
		free(Last_node);
	}
}
