#include "main.h"
/**
 * print_diagonal-draws a diagonal line
 * @n:number of \
 */
void print_diagonal(int n)
{
int total = n;
int space = 0;

if (n <= 0)
{
  n = 0;
  _putchar('\n');
}

while (n--)
{
  while (space--)
    _putchar(' ');
  space = total - n;
  _putchar(92);
  _putchar('\n');
}
}
