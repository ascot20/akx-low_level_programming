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
	unsigned int size = strlen(str);
	char *ptr = (char *)malloc(sizeof(*str) * size);
	unsigned int i;

	if (ptr == NULL)
		exit(1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
