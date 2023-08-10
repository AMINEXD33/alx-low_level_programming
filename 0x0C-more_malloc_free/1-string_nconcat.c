#include <stdlib.h>
#include <stdio.h>
#include "main.h"
int len(char *string)
{
	int x;

	x = 0;
	while (string[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	unsigned int len1;
	unsigned int len2;
	char *Mem;

	/*lengths logic handling*/
	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = len(s1);
	if (s2 != NULL)
		len2 = len(s2);
	if (n < len2)
		len2 = n;
	/*allocation*/
	Mem = malloc(sizeof(char) * (len1 + len2 + 1));
	if (Mem == NULL)
		return (NULL);
	/*concat*/
	for (x = 0; x < len1; x++)
	{
		Mem[x] = s1[x];
	}
	for (y = 0; y < len2; y++)
	{
		Mem[x + y] = s2[y];
	}
	Mem[x + y] = '\0';
	/*return*/
	return (Mem);
}