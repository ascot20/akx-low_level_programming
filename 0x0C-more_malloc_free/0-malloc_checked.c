#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-allocates memory
 * @b:unsigned int variable
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

