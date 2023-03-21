#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: parameter
 * Return: returns int
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x = -x;
		return (x % 10);
	}
	else
		return (x % 10);
}
