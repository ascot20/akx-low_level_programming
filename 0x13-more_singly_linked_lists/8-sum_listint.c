#include "lists.h"
/**
 * sum_listint-returns sum
 * @head:pointer
 * Return:returns int
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
