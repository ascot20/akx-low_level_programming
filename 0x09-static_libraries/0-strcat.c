#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: String to be appended to
 * @src: String to be appended
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int start = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
start++;
dest[i] = src[start];
i++;
} while (src[start] != '\0');

return (dest);
}
