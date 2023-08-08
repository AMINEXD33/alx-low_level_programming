#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_word- this function get the coordinate of
 *the current word , depends on the position of start and end
 *@str: string
 *@start: start index
 *@end: end index
 */
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
 *count_words- this function countes how many words in a string
 *@str: string
 *Return: the count of words
 */
int count_words(char *str)
{
	int x;
	int flag;
	int word;

	flag = 0;
	word = 0;
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
				word = word + 1;
			}
		}
	}
	return (word);
}
/**
 *strtow - splite words from a string of any length and put each word ,
 *in a 2d array coordinate
 *@str: string
 *Return: 2d array containing the words , NULL if no string , or empty string
 */
char **strtow(char *str)
{
	int Bytes;
	int flag;
	int word;
	char **Mem;
	int x;
	int start;
	int end;

	if (str == NULL)/*if str is NULL return NULL*/
		return (NULL);
	word = count_words(str);
	if (word == 0)/*if no words return NULL*/
		return (NULL);
	Mem = malloc(sizeof(char *) * (word + 1));/*allocate memory for (words+NULL)*/
	if (Mem == NULL) /*on malloc fail return NULL*/
		return (NULL);
	start = 0;
	end = 0;
	for (x = 0; x < word; x++)/*for each word*/
	{
		/*get the coordinates of the word, start and end*/
		get_word(str, &start, &end);
		/*allocate memory for (length+\0)*/
		Mem[x] = malloc(sizeof(char) * ((end - start) + 1));
		Bytes = 0;
		for (flag = start; flag < end ; flag++)/*from the start to end*/
		{
			Mem[x][Bytes] = str[flag];/*copy Bytes*/
			Bytes++;
		}
		Bytes++;
		Mem[x][Bytes] = '\0';/*add the zero at the end*/
	}
	Mem[word] = NULL;/*last slot in the 2d array*/
	return (Mem);
}
