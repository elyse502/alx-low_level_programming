#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a Node from  dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the Node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *Tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (Tmp == NULL)
			return (-1);
		Tmp = Tmp->next;
	}

	if (Tmp == *head)
	{
		*head = Tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		Tmp->prev->next = Tmp->next;
		if (Tmp->next != NULL)
			Tmp->next->prev = Tmp->prev;
	}

	free(Tmp);
	return (1);
}
