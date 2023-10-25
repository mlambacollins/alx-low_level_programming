#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to a pointer to the head of the list
 * @n: the input
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (new_node->n != n)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

