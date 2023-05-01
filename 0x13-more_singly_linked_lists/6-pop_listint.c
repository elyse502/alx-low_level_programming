#include "lists.h"

/**
 * pop_listint - Deletes the Head node of a listint_t list.
 * @head: A pointer to the address of the
 *        Head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The Head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
