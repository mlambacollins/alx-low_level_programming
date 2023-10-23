#include "lists.h"

/**
 * free_list - Frees a list
 * @head: A pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	for (temp = head; temp != NULL; temp = next)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
	}
}
