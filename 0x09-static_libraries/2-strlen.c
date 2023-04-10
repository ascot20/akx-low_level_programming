#include <stdio.h>
/**
 * _strlen - a function that returns
 * the length of a string
 *
 * @s: pointer to a character
 * Return: length of the string
 */
int _strlen(char *s)
{
int n = 0;

while (s[n])
n++;

return (n);
}
