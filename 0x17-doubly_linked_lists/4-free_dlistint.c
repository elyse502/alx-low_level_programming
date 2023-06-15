#include "lists.h"

/**
 * free_dlistint - Frees  linked dlistint_t list.
 * @head: The Head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *Tmp;

	while (head)
	{
		Tmp = head->next;
		free(head);
		head = Tmp;
	}
}
