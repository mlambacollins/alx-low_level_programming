#include "lists.h"

/**
 * listint_len - lists the number of elements in a list
 * @h: pointer to the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t total_elements = 0;

	while (h != NULL)
	{
		total_elements++;
		h = h->next;
	}

	return (total_elements);
}
