#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers-printf the vars and separate them with a char array
*@separator: the char that separate each int
*@n: the length of the var array
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list sp;

	va_start(sp, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(sp, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	va_end(sp);
}
