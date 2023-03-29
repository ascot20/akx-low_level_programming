#include "main.h"
/**
 * _strcat-concatenates two strings
 * @dest:pointer to string
 * @src:pointer to string
 * Return: concantenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;
	while(*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}
