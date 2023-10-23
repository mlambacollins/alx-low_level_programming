#include "lists.h"

/**
 * list_len - The number of elemenst in the list
 * @h: Pointer to the list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
