#include "main.h"
/**
 * _memset-fills memory with a constant byte
 * @s:pointer to string
 * @b:charater to replace with
 * @n:size
 * Return:pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i;
	
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
