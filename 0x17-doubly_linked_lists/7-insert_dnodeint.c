#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a New node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the New node.
 * @n: The integer for the New node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the Address of the New node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Tmp = *h, *New;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		Tmp = Tmp->next;
		if (Tmp == NULL)
			return (NULL);
	}

	if (Tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
		return (NULL);

	New->n = n;
	New->prev = Tmp;
	New->next = Tmp->next;
	Tmp->next->prev = New;
	Tmp->next = New;

	return (New);
}
