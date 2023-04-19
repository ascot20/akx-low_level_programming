#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator-a function that executes a function on each element of an array
 * @array:pointer to int
 * @size:size of array
 * @action:function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;

	if (size <= 0)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
