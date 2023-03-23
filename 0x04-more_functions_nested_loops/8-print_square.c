#include "main.h"
/**
 * print_square-prints a square followed by a line
 *
 * @size:parameter input
 */
void print_square(int size)
{
int const_size = size;
int temp_size = size;

if (size <= 0)
{
size = 0;
_putchar('\n');
}

while (size--)
{
while (temp_size--)
{
_putchar(35);
}
_putchar('\n');
temp_size = const_size;
}
}
