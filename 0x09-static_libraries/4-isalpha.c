#include "main.h"
/**
 * _isalpha - A function that returns 1 when c is an alphabet
 * or 0 otherwise
 * @c : the character to be checked
 * Return: 0
 */
int _isalpha(int c)
{
if (((c >= 97) & (c <= 122)) | ((c >= 65) & (c <= 90)))
return (1);
return (0);
}
