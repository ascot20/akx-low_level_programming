#include "lists.h"
/**
 * list_len  - function to get length of node
 * @h: pointer to nodes
 * Return: return size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *sptr;
	unsigned int i;

	sptr = malloc(sizeof(list_t));
	if (sptr == NULL)
		return (0);
	sptr = h;
	i = 0;
	while (sptr != NULL)
	{
		sptr = sptr->next;
		i++;
	}
	return (i);
}
