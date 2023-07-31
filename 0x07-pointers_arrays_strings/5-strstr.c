#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * *_strstr - loops over string and find the first occurence of a needle
 *@s: the string we're searching in
 *@needle: is the word we're searching for
 *Return: the address of the beginning of theh occurence
 */
char *_strstr(char *s, char *needle)
{
	int X;
	int y;

	X = 0;
	while (s[X] != '\0')
	{
		y = 0;
		while (s[X + y] == needle[y])
		{
			if (needle[y + 1] == '\0')
			{
				return (&s[X]);
			}
			y++;
		}
		X++;
	}
return (NULL);
}
