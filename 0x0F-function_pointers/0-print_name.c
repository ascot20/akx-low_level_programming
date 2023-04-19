#include <stdio.h>
#include "function_pointers.h"
/*
 * print_name-function that prints name
 * @name:pointer to string
 * @f-funtion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
