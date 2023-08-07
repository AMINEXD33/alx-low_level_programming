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
	return (X);
}







/**
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int X;
	unsigned int Y;
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
	Mem = malloc(sizeof(char) * (len1 + len2 +1)); 
	if (Mem == NULL)
		return (NULL);
	/* concatenates */
	X = 0;
	Y = 0;
	for (X = 0; X < len1; X++)
	{
		Mem[X] = s1[X];
	}
	for (Y = 0; Y < len2; Y++)
	{
		Mem[X + Y] = s2[Y];
	}

	return (Mem);
}
