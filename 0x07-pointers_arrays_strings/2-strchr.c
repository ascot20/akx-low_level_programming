#include "main.h"
/**
 * _strchr-locates a character in a string
 * @s:pointer to string
 * @c:character to be located
 * Return:pointer to s
 */
char *_strchr(char *s, char c)
{
	do{
		if (*s == c)
			return (s);
		s++;
	}while(*s);
	return ('\0');
}
