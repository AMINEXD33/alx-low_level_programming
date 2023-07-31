#include "main.h"
#include <stddef.h>
/**
 * *_strchr - finds the first accurence of char in a string
 *@s: string
 *@c: target char
 *Return: (ADRESS) if c is found , (NUL) if the target is not in the string
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
	return (NULL);
}
