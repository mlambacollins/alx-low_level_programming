#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: A pointer to a pointer to the head of a list
 *
 * Return: void
 *
 * Description: Sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}
