#include "main.h"
#include <stdio.h>
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
	char dict[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	cur = 0;
	while (s[cur] != '\0')
	{
		cur2 = 0;

		while (dict[cur2] != '\0')
		{
			if (s[cur] == dict[cur2])
			{
				s[cur] = dict[((cur2 + 26) % 52)];
				break;
			}
			cur2++;
		}
		cur++;
	}
	return (s);
}
