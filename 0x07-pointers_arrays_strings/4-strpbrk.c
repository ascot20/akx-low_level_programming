#include "main.h"
/**
* _strpbrk-searches a string for any of a set of string
* @s:pointer to string
* @accept:pointer to string
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	char *temp;
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*temp == *s)
				return (s);
			temp++;
		}
		s++;
	}
    return ('\0');
}
