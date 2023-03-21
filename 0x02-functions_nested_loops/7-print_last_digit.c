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
		int r = x % 10;
		_putchar(r);
	}
	else
		int r = x % 10;
		_putchar(r);
}
