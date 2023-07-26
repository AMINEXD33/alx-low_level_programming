#include "main.h"
/**
 *string_toupper - change any lowercase in a string to uppercase
 *@string: is the string or char array
 *
 *Return: the address of string
 */
char *string_toupper(char *string)
{
	int cur;
	int const Const = -32;/*the diffrence bt the upper and lower in ascii table)*/

	cur = 0;
	while (string[cur] != '\0')
	{
		if (string[cur] >= 97 && string[cur] <= 122)
		{
			string[cur] = (string[cur] + Const);
		}
		cur++;
	}
	return (string);
}
