#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all-function that prints anything
 * @format:string pointer
 */
void print_all(const char * const format, ...)
{
	int count = strlen(format);
	int i = 0, j = 0;
	
	va_list args;

	va_start(args, count);
	while (i < count)
	{
		while (j < 4)
		{
			if (format[i] == c[j])
				
		}
		i++;
	}

}
