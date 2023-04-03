#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
int i = 0, sum1 = 0, sum2 = 0;

while (i < size)
{
sum1 += a[i];
sum2 += a[size - i - 1];
a += size;
i++;
}
printf("%d, ", sum1);
printf("%d\n", sum2);
}
