
#ifndef _0sum_them_all_H
#define _0sum_them_all_H
int sum_them_all(const unsigned int n, ...);
#endif /*_0sum_them_all_H*/

#ifndef _1print_numbers_H
#define _1print_numbers_H
void print_numbers(const char *separator, const unsigned int n, ...);
#endif /*_1print_numbers_H*/

#ifndef _putchar_H
#define _putchar_H
int _putchar(char c);
#endif /*_putchar_H*/

#ifndef _2print_strings_H
#define _2print_strings_H
void print_strings(const char *separator, const unsigned int n, ...);
#endif /*print_strings*/

#ifndef _3print_all_H
#define _3print_all_H
void print_all(const char * const format, ...);
/**
 * struct choice- the type and its correct printing function
 * @type: the type , char , int , float , string
 * @f:the correct function to print the type
 */
#include "stdarg.h"
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
		printf("(nil)");
	else
		printf("%s", str);
}
typedef struct choice
{
	char type;
	void(*f)(va_list);
} choice_;

#endif /*_3print_all*/

