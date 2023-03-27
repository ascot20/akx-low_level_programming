#include "main.h"
/**
 * swap_int-swaps the value of two integers
 * @a: parameter to be swapped
 * @b: parameters to be swapped
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
