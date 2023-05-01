#include "lists.h"
/**
 * pop_listint-deletes the head node of a listint_t list
 * @head:pointer to pointer
 * Return:return int
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (*head == NULL)
		return (0);

	current = *head;
	*head = current->next;
	value = current->n;
	free(current);

	return (value);
}
