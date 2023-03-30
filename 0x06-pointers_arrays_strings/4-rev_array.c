#include "main.h"
/**
* reverse_array-reverses the content
* @a:pointer to integer
* @n:size of array
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
