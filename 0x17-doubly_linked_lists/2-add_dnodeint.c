#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Add node to front of doubly linked list.
 * @head: Pointer to head of list.
 * @n: Node data.
 * Return: Address of new node OR Null if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	/* Malloc and set new node data */
	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	/* Account for empty linked list */
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	/* Account for regular linked list */
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
