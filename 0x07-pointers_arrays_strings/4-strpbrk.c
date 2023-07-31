#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_in - checking is a target in a prefix
 *@s: string
 *@target: is the target
*Return: 1 if its in the prefix , 0 if not
 */
int is_in(char *s, char target)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == target)
		{
			return (1);
		}
		x++;
	}
	return (0);
}
/**
 * *_strpbrk- returns a pointe to the first byte that exist in the prefix
 *@s: string
 *@accept:the accepted prefix
 *Return: addresse of the first matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (is_in(accept, s[x]) == 1)
		{
			return (&s[x]);
		}
		x++;
	}
	return (NULL);
}
