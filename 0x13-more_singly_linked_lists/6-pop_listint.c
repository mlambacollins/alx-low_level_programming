#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to a pointer to the head of a list
 *
 * Return: the head's node data, 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data_value;

	if (head == NULL)
		return (0);

	temp = *head;
	data_value = temp->n;
	*head = temp->next;
	free(temp);

	return (data_value);
}
