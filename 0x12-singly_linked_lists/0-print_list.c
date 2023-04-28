#include "lists.h"
/**
 * print_list - function to print node
 * @h: pointer to node struct
 * Return: return type size_t
 */
size_t print_list(const list_t *h)
{
		unsigned int i;
		const list_t *sptr = NULL;

		i = 0;
		sptr = h;
		while (sptr != NULL)
		{
			if (sptr->str ==  NULL)
			{
				printf("[0] (nil)\n");
			}
			else
				printf("[%d] %s\n", sptr->len, sptr->str);
			sptr = sptr->next;
			i++;
		}
		return (i);
}
