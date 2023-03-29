#include "main.h"
/**
 * _strncpy-copies a string
 * @dest:pointer to string
 * @src:pointer to string
 * @n:number of point
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
