#include "lists.h"

/**
 * free_listint - frees a list
 * @head: A pointer to a list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *remove;

	while (head != NULL)
	{
		remove = head;
		head = head->next;
		free(remove);
	}
}
