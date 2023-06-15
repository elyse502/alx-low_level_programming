#include "lists.h"

/**
 * add_dnodeint_end - Adds a New node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The Integer for the New node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the Address of the New node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *New, *Last;

	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		New->prev = NULL;
		*head = New;
		return (New);
	}

	Last = *head;
	while (Last->next != NULL)
		Last = Last->next;
	Last->next = New;
	New->prev = Last;

	return (New);
}
