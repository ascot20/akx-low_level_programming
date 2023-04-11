#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup-returns a pointer to a newly allocated space
 * @str:pointer to string
 * Return:pointer to string
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *ptr;
	unsigned int i;

	if (str == 0)
		return (NULL);
	size = strlen(str) + 1;
	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
