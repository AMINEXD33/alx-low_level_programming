#include "main.h"
#include "stdio.h"
/**
 * is_num - a determine if the char represent
 * Description: from ascii code determine if the
 * value of the char represent a number or not
 * a number
 * @X: a char
 * Return: 1 if yes , 0 if no
 */
int is_num(char X)
{
	if (X <= 57 && X >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _atoi - determine the first number and its signe in a string
 * Description: get the first number and its signe from any list of chars
 * of length n
 *@s : char list (array)
 *Return:the first int found and its sign
 */
int _atoi(char *s)
{
	int i;
	int negative;
	unsigned int value;

	negative = 0;
	i = 0;
	value = 0;
	while (s[i] != '\0')
	{
		if (is_num(s[i]) == 1)
		{
			while (1)
			{
				if (is_num(s[i]) == 0 || s[i] == '\0')
				{
					if ((negative % 2) == 1)
						return (value * -1);
					else if ((negative % 2) == 0)
						return (value);
				}
				value = value * 10 + (s[i] - '0');
				i++;
			}

		}
		else if (s[i] == 45)
		{
			negative++;
		}
		i++;
	}
	return (value);
}











