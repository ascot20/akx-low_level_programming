#include "main.h"
/**
 * print_triangle- print triangle
 * @size:input
 */
void print_triangle(int size)
{
	int space = size - 1;

	while(space >= 0)
	{
		int hash = size - space;

		for (int i = space; i > 0; i--)
			_putchar(' ');
	
		for (int x = hash; x > 0; x--)
			_putchar('#');
	
	_putchar('\n');
	space--;
	}
	if (size < 0)
		_putchar('\n');
}
