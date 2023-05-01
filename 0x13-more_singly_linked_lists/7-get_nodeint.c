#include "lists.h"
/**
 * get_nodeint_at_index-function that returns nth node
 * @head:contains address of list
 * @index:nth index
 * Return:address of nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	i = 0;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}
