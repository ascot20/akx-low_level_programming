#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range-creates an array pf integers
 * @min:starting int
 * @max:ending int
 * Return: return int pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		ptr[i] = min;

	return (ptr);

}
