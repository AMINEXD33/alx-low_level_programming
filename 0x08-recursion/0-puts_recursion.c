#include "main.h"
/**
 *_puts_recursion - prints a char with recursion
 *@s: char array
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
