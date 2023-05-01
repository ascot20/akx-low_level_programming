#include "lists.h"
/**
 * insert_nodeint_at_index-inserts new node at index
 * @head:pointer to pointer
 * @idx:index position
 * @n:new data
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *previous;
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	current = *head;

	while (current && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i != idx)
		return (NULL);

	new->n = n;
	new->next = current;
	previous->next = new;

	return (new);
}
