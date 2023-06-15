#include "lists.h"

/**
 * sum_dlistint - Sums all the Data of dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the Data.
 */
int sum_dlistint(dlistint_t *head)
{
	int Sum = 0;

	while (head)
	{
		Sum += head->n;
		head = head->next;
	}

	return (Sum);
}

