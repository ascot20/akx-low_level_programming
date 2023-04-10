#include "main.h"
#include <stdio.h>
/**
 * _abs - A function that absolute value of a given input
 * @n : the integer to be checked
 * Return: 0, 1 or -1
 */
int _abs(int n)
{
if (n >= 0)
return (n);
return (-1 * n);
}
