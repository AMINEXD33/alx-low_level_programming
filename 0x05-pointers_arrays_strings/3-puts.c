#include "main.h"
/**
 * _puts - prints a char str and a new line
 * @str : is the char variable
 * Return: None
 */
void _puts(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
