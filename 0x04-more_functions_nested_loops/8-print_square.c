#include "main.h"
/**
 * print_square-prints a square followed by a line
 * @size:parameter input
 */
void print_square(int size)
{
	if (size <= 0)
	{
		size = 0;
		_putchar('\n');
	}

	int total = size;
	while (size > 0)
	{
		int w = total;
		while (w > 0)
		{
			_putchar('#');
			w--;
		}
		_putchar('\n');
		size--;
	}
}
