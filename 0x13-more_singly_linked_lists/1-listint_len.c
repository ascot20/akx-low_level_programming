#include "lists.h"
/**
 * listint_len-returns number of elements in a list
 * @h:pointer to head node
 * Return:size_t
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		current = current->next;
		num++;
	}
	return (num);
}
