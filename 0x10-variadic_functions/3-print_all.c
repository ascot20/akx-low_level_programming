#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_int-function to print int
 * @args:va_list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float-function to print float
 * @args:va_list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string-function to print string
 * @args:va_list
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_char-function to print char
 * @args:va_list
 */
void print_char(va_list args)
{
        printf("%c", va_arg(args, int));
}



/**
 * print_all-function that prints anything
 * @format:string pointer
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *sep = "";
	Call types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (types[j].type != NULL)
		{
			if (types[j].type[0] == format[i])
			{
				printf("%s", sep);
				types[j].funcptr(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
