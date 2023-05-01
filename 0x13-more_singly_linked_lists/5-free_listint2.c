#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the Address of the
 *        head of the listint_t list.
 *
 * Description: Sets the head to NULL.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
