#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat-concatenates two strings
 * @s1:pointer to string
 * @s2:pointer to string
 * Return:pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	unsigned int size = size1 + size2;
	unsigned int i;
	unsigned int j;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return NULL;

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0;i < size; i++, j++)
		ptr[i] = s2[j];

	return (ptr);


}
