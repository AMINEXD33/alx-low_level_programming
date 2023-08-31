#include "main.h"
#include <stdio.h>
/**
 * get_binary- convert a num to binary
 * @n: the number to convert
 */
void get_binary(unsigned long int n)
{
	if (n != 0)
	{
		get_binary(n / 2);
		printf("%ld", n % 2);
	}
}
/**
 * print_binary- handle the case of n == 0 and print the binary of a num
 * @n: the number to convert to binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	get_binary(n);
}
