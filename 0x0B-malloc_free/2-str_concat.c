#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *len- calculate the length  of a string
 *@s: string
 *Return: length os s
 */
unsigned int len(char *s)
{
	unsigned int X;

	X = 0;
	while (s[X] != '\0')
	{
		X++;
	}
	return (X);
}
/**
 *str_concat - allocate a memory to store the two strings s1 and s2
 *, and concat them
 *@s1: string 1
 *@s2: string 2
 *Return: address of the new allocated memory , NULL if malloc fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int X;
	unsigned int Y;
	unsigned int len1;
	unsigned int len2;
	char *Mem;

	/*a len stays 0 if its NULL*/
	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = len(s1);
	if (s2 != NULL)
		len2 = len(s2);
	/*calculate and handling malloc*/
	Mem = malloc(sizeof(char) * (len1 + len2 + 1));
	if (Mem == NULL)
		return (NULL);
	/* concatenates */
	X = 0;
	Y = 0;
	for (X = 0; len1 > X; X++)
	{
		Mem[X] = s1[X];
	}
	for (Y = 0; len2 > Y; Y++)
	{
		Mem[X + Y] = s2[Y];
	}

	return (Mem);
}
