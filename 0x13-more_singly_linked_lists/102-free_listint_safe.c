#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique Nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the Head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the Number of unique Nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *Tortoisee, *Hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	Tortoisee = head->next;
	Hare = (head->next)->next;

	while (Hare)
	{
		if (Tortoisee == Hare)
		{
			Tortoisee = head;
			while (Tortoisee != Hare)
			{
				nodes++;
				Tortoisee = Tortoisee->next;
				Hare = Hare->next;
			}

			Tortoisee = Tortoisee->next;
			while (Tortoisee != Hare)
			{
				nodes++;
				Tortoisee = Tortoisee->next;
			}

			return (nodes);
		}

		Tortoisee = Tortoisee->next;
		Hare = (Hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the Address of
 *     the head of the listint_t list.
 *
 * Return: The Size of the list that was freed.
 *
 * Description: The Function sets the Head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
