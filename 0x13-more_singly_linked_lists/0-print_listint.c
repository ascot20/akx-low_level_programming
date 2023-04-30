#include "lists.h"
/**
 * print_listint-prints all elements of list
 * @h:pointer
 * Return:return size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}
	return (num);
}
