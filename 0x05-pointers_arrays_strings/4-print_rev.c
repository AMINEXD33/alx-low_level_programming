#include "main.h"
/**
 *print_rev - print a char str in reverce
 *@s : is the variable char
 *Return: None
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar(s[len]);
	_putchar('\n');
}
