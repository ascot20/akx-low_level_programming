#include "lists.h"
/**
 * add_nodeint_end-adds a new node at the end
 * @head:pointer to pointer
 * @n:const int
 * Return:return address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *current;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);

}
