#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a Node in  dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The Node to locate.
 *
 * Return: If the Node does not exist - NULL.
 *         Otherwise - the Address of the located Node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
