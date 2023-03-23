#include "main.h"
/**
 * print_diagonal-draws a diagonal line
 * @n:number of \
 */
void print_diagonal(int n)
{
	if(n <= 0)
	{
		n = 0;
		_putchar('\n');
	}
	int c = 1;
	while (c <= n)
	{
		if (c > 1)
		{
			int i = 1;
			while (i < c)
			{
				_putchar(' ');
				i++;
			}
		}

		_putchar('\\');
		_putchar('\n');
		c++;
	}
}
