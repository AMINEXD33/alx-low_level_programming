#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * struct choice- the type and its correct printing function
 * @type: the type , char , int , float , string
 * @f:the correct function to print the type
 */
typedef struct choice
{
	char type;
	void(*f)(va_list);
} choice_;
void print_int(va_list ap);
void print_char(va_list ap);
void print_float(va_list ap);
void print_str(va_list ap);
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
			if (Choice[var_len].type == format[x] && var_len < 3)
			{
				printf(", ");
				break;
			}
			Choice[var_len].f(ap);
			var_len++;
		}
		x++;
	}
	printf("\n");
	va_end(ap);
}
/**
 * print_char-print a char from a va_list
 * @ap: the variable list
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);

}
/**
 * print_int-print an int from a va_list
 * @ap: the variable list
 */
void print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	printf("%d", num);
}
/**
 * print_float-print a float from a va_list
 * @ap: the variable list
 */
void print_float(va_list ap)
{
	double num;

	num = va_arg(ap, double);
	printf("%f", num);
}
/**
 * print_str-print a string from a va_list
 * @ap: the variable list
 */
void print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
