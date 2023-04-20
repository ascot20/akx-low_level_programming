#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
/**
 *struct call-struct type
 *@type:char pointer
 *@funcptr:function pointer
 */

typedef struct
{
	char *type;
	void (*funcptr)();
} Call;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list);
void print_string(va_list);
void print_float(va_list);
void print_char(va_list);

#endif
