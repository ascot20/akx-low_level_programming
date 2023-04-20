#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings-function that prints strings
 * @separator:pointer to char
 * @n:int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *prin;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		prin = va_arg(args, char *);
		if (*prin)
			printf("%s", prin);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		if (separator == NULL && i != n -1)
			printf(" ");
	}
	va_end(args);
	printf("\n");
}
