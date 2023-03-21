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
		int j = 0

		while (j < 10)
		{
			_putchar((i * j) + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
