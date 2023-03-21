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
		x = -1 * (x % 10);
		_putchar(x + '0');
	}
	else
	{
		x = x % 10;
		_putchar(x + '0');
	}
	return (x);
}
