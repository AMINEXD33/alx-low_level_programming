#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- sum all the args passed to the function
 * @n: length of the var list
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int x;
	va_list X;

	if (n == 0)
		return (0);
	va_start(X, n);
	sum = 0;
	for (x = 0; x < n; x++)
		sum += va_arg(X, int);
	va_end(X);
	return (sum);
}