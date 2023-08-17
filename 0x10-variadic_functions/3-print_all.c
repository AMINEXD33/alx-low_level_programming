#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all-print variables, depending on the specifiers
 * @format: specifiers array
 */
void print_all(const char * const format, ...)
{
	int x;
	unsigned int var_len;
	va_list ap;
	struct choice Choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};

	va_start(ap, format);
	/*get the len of the var list*/
	x = 0;
	while (format[x] != '\0')
	{
		var_len = 0;
		while (var_len < 4)
		{
			if (Choice[var_len].type == format[x])
			{
				Choice[var_len].f(ap);
				if (var_len < 3)
					printf(", ");
				break;
			}
			var_len++;
		}
		x++;
	}
	printf("\n");
	va_end(ap);
}
