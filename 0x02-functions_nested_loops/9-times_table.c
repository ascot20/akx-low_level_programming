#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int number = i * j;

			if (number > 9)
			{
			_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++
			}
			else
			{
				_putchar(number + '0');
				j++;
			}
		}
		i++;
		_putchar('\n');
	}
}
