#include "main.h"
/**
 * _isdigit - function to check if c is a digit
 * @c: character to be checked
 * Return: 0 or 1
 *
 */
int _isdigit(int c)
{
if ((c >= 48) & (c <= 57))
return (1);
return (0);
}
