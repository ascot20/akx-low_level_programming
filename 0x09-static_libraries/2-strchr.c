#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}

return ('\0');
}
