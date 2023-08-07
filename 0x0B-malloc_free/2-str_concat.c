#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 */
unsigned int len(char *s)
{
	unsigned X;

	X = 0;
	while (s[X] != '\0')
	{
		X++;
	}
	return (X - 1);
}







/**
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int X;
	unsigned len1;
	unsigned len2;
	char *Mem;
	
	/*a len stays 0 if its NULL*/
	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = len(s1);
	if (s2 != NULL)
		len2 = len(s2);
	/*calculate and handling malloc*/
	Mem = malloc(sizeof(char) * (len1 + len2 +2)); /*1 is or the ('\0')*/
	if (Mem == NULL)
		return (NULL);
	/* concatenates */
	X = 0;
	while (X <= (len1 + len2 +2))
	{
		if (X <= len1)
		{
			Mem[X] = s1[X];
		}
		if (X > len1)
		{
			Mem[X] = s2[(X - len1) - 1];
		}
		X++;
	}	
	return (Mem);
}
