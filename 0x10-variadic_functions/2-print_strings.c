#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings-printf the vars and separate them with a char array
*@separator: the char that separate each char*
*@n: the length of the var array
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list sp;
	char *st;

	va_start(sp, n);
	for (x = 0; x < n; x++)
	{
		st = va_arg(sp, char*);
		if (st == NULL)
			printf("(nil)");
		else
		{
			printf("%s", st);
		}
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(sp);
}
