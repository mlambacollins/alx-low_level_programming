#include "lists.h"

/**
 * print_listint - Prints the elements in a list
 * @h: A pointer to the list
 *
 * Return: The total number of node in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t total_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total_nodes++;
	}

	return (total_nodes);
}
