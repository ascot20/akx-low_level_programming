#include "main.h"
/**
 * _strlen-returns the length of a string
 * @s: pointer to string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
