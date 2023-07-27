#include "main.h"
#include <stdio.h>
/**
 * leet - a function that encodes a text to 1337
 *@s: is the txt
 *Return: the address of s
 *
 */
char *leet(char *s)
{
	int cur;
	int cur2;
	char dict[] = "aAeEoOtTlL";
	int dict_[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	cur = 0;
	while (s[cur] != '\0')
	{
		cur2 = 0;

		while (dict[cur2] != '\0')
		{
			if (s[cur] == dict[cur2])
			{
				s[cur] = dict_[cur2] + 48;
			}
			cur2++;
		}
		cur++;
	}
	return (s);
}

