#include "main.h"
/**
 * print_square-prints a square followed by a line
 *
 * @size:parameter input
 */
void print_square(int size)
{
	int total = size

	if (size <= 0)
	{
		size = 0;
		_putchar('\n');
	}


	while (size > 0)
	{
		int w = total;
		while (w > 0)
		{
			_putchar(35);
			w--;
		}
		_putchar('\n');
		size--;
	}
}
