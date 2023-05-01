#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the Head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the Address of the Node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Tortoisee, *Hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	Tortoisee = head->next;
	Hare = (head->next)->next;

	while (Hare)
	{
		if (Tortoisee == Hare)
		{
			Tortoisee = head;

			while (Tortoisee != Hare)
			{
				Tortoisee = Tortoisee->next;
				Hare = Hare->next;
			}

			return (Tortoisee);
		}

		Tortoisee = Tortoisee->next;
		Hare = (Hare->next)->next;
	}

	return (NULL);
}
