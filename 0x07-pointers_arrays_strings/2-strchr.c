#include "main.h"
#include <stddef.h>
/**
 * *_strchr - finds the first occurence of char in a string
 *@s: string
 *@c: target char
 *Return: (ADRESS) if c is found , (NULL) if the target is not in the string
 *
 */
char *_strchr(char *s, char c)
{
	int I;

	I = 0;
	while (s[I] != '\0')
	{
		if (s[I] == c)
		{
			return (&s[I]);
		}
		I++;
	}
	if (c == '\0' && s[I] == '\0')
	{
		return (&s[I]);
	}
	return (NULL);
}
