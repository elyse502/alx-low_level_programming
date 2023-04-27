#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *New_node;
	size_t n;

	New_node = malloc(sizeof(list_t));
	if (New_node == NULL)
		return (NULL);

	New_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	New_node->len = n;
	New_node->next = *head;
	*head = New_node;

	return (New_node);
}
