#include "lists.h"
/**
 * free_listint2-frees a listint_t
 * @head:pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
