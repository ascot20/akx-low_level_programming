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
	unsigned int size = strlen(str) + 1;
	char *ptr = (char *)malloc(sizeof(char) * size);
	unsigned int i;

	if (ptr == NULL)
		return (NULL);
	if (str == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
