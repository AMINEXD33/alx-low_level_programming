#include "main.h"
#include <stdio.h>
/**
 * helper_function - this function just calculates the
 * position of the next 13nth letter
 *@C: is the position of a letter
 *Return: the position of the 13nth
 */
int helper_function(int *C)
{
	if (*C + 13 < 26)
	{
		return (*C + 13);
	}
	else if (*C + 13 >= 26)
	{
		return ((*C + 13) - 26);
	}
	return (-1);
}
/**
 * *rot13 - this function encodes a text by switching every letter by
 * next 13 position relative to it .
 *@s: the string
 *Return: address of the string
 *
 *
 */
char *rot13(char *s)
{
	int cur;
	int cur2;
	char dict[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cur = 0;
	while (s[cur] != '\0')
	{
		cur2 = 0;

		while (dict[cur2] != '\0')
		{
			if (s[cur] == dict[cur2])
			{
				s[cur] = (helper_function(&cur2) + 'A');
				break;
			}
			else if (s[cur] == dict[cur2] + 32)
			{
				cur[s] = ((helper_function(&cur2) + 'A') + 32);
				break;
			}
			cur2++;
		}
		cur++;
	}
	return (s);
}
