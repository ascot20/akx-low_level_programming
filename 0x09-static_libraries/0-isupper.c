#include "main.h"
/**
 * _isupper - function to return 1 when c is
 * uppercase else 0
 * @c : the character to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
if ((c >= 65) & (c <= 90))
return (1);
return (0);
}
