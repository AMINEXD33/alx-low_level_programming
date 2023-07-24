#include "main.h"
/**
 *puts2 - put every other char of a string
 *@str : char var
 *Return: None
 *
 */
void puts2(char *str)
{
	int tracker;
	int X;
	int  flag;

	flag = 1;
	X = 0;
	tracker = 0;
	while (str[X] != '\0')
	{
		if (flag == 1)
		{
			_putchar(str[X]);
			flag = 0;
		}

		if (tracker == 2)
		{
			_putchar(str[X]);
			tracker = 0;
		}
		X++;
		tracker++;

	}
	_putchar('\n');
}
