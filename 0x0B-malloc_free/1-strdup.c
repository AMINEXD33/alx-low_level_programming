#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *len- get the length of the str
 *@str: string
 *Return: the length
 */
unsigned int len(char *str)
{
	unsigned int X;

	X = 0;
	while (str[X] != '\0')
	{
		X++;
	}
	return (X);
}
/**
 *_strdup - copy an str to an allocated space in memory
 *@str: the string
 *Return: pointer to the new address in heap
 */
char *_strdup(char *str)
{
	unsigned int lenn;
	char *S;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	lenn = len(str);
	S = malloc(sizeof(char) * lenn);
	if (S == NULL)
		return (NULL);

	for (i = 0; i < lenn; i++)
	{
		S[i] = str[i];
	}
	S[i] = '\0';

	return (S);
}
