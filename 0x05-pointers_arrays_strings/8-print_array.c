#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line
 *
 * @a: pointer to array
 * @n: number array elements to print
 */
void print_array(int *a, int n)
{
int start = 0;

while (start < n)
{
printf("%d", a[start]);
if (start != n - 1)
printf(", ");
start++;
}

printf("\n");

}
