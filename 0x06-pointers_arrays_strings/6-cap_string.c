#include "main.h"
#include <stdio.h>
/**
 * is_in - a helper function , it just checks if a char is in a list
 *@X: the char
 *@list: is the list it will search
 *Return: (1) if X is found in list , (0) otherwise
 */


int is_in(char X, char *list)
{
	int cur;

	cur = 0;
	while (list[cur] != '\0')
	{
		if (list[cur] == X)
		{
			return (1);
		}
		cur++;
	}
	return (0);
}
/**
 * cap_string - this function searches for the first letter
 * in a word and make sure that its uppercased
 *@s: string
 *Return: the address to the string
 *
 *
 */
char *cap_string(char *s)
{
	int cur;
	int flag;
	int const CONST = 32;
	char list[] = ",;.!?\"(){} \t\n";


	flag = 1;
	cur = 0;
	while (s[cur] != '\0')
	{
		if ((s[cur] >= 65 && s[cur] <= 90) || (s[cur] >= 48 && s[cur]  <= 57))
		{
			flag = 0;
		}
		else if (flag == 1 && (s[cur] >= 97 && s[cur] <= 122))
		{
			s[cur] = (char)(s[cur] - CONST);
			flag = 0;
		}
		else if (is_in(s[cur], list) == 1)
		{
			flag = 1;
		}
		cur++;
	}
	return (s);
}
