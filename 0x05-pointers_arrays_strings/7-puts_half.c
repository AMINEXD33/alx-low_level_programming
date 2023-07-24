#include "main.h"
/**
 *puts_half - print the second half of a char list
 *@str: is the char var
 *
 *Return: None
 *
 */
void puts_half(char *str)
{
	int len;
	int tracker;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len > 0)
	{
		len--;
		if (((len / 2) % 2)  == 0)
		{
			tracker = len / 2;
		}
		else
		{
			tracker = (len - 1) / 2;
		}
		while (str[tracker] != '\0')
		{
			_putchar(str[tracker]);
		}
		_putchar('\n');
	}
}
