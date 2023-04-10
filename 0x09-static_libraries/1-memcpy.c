#include "main.h"

/**
 * *_memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (n > 0)
{
dest[i] = src[i];
i++;
n--;
}

return (dest);
}
