#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void get_word(char *str, int *start, int *end)
{
	int x;
	int flag;

	flag = 0;
	x = *end;
	while (str[x] != '\0')
	{
		if (flag == 0)
		{
			if (str[x] != ' ')
			{
				flag = 1;
				*start = x;
			}
		}
		else
		{
			if (str[x] == ' ')
			{
				*end = x;
				break;
			}
		}
		x++;
	}
	*end = x;
}
/**
 *
 *
 *
 */
char **strtow(char *str)
{
	int Bytes;
	int flag;
	int x;
	int word;
	char **Mem;
	int start;
	int end;
	
	if (str == NULL)
		return (NULL);
	word = 0;
	Bytes = 0;
	Bytes++;
	flag = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		if (flag == 0)
		{
			if (str[x] != ' ')
				flag = 1;
		}
		if (flag == 1)
		{
			if (str[x] == ' ' || str[x + 1] == '\0')
			{
				flag = 0;
				word++;
			}
		}	
	}
	if(word == 0)
		return (NULL);
	Mem = malloc(sizeof(char *) * (word + 1));
	start = 0;
	end = 0;	
	for (x = 0; x < word; x++)
	{
		get_word(str , &start, &end);
		Mem[x] = malloc(sizeof(char) * ( (end - start) + 1) );
		Bytes = 0;
		for (flag = start; flag < end ; flag++)
		{
			Mem[x][Bytes] = str[flag];
			Bytes ++;
		}
		Bytes++;
		Mem[x][Bytes] = '\0';
	}
	Mem[word] = NULL;
	return (Mem);
}
