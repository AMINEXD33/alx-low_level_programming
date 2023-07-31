#include "main.h"
#include <stdio.h>
/**
 * checker - checks is the the following bytes are exactly equal to needle
 *@haystack: string we're searching in
 *@position: is the position of the first needle byte
 *@needle: is the needle word ,, aka what we're searching for
 *Return: 0 if needle does not eq to the string , starting at position
 */
int checker(char *haystack, int position, char *needle)
{
	int x;
	int flag;

	flag = 1;
	x = 0;
	while (needle[x] != '\0')
	{
		if (haystack[position + x] != needle[x])
		{
			flag = 0;
		}
		x++;
	}
	return (flag);
}
/**
 * *_strstr - loops over string and find the first occurence of a needle
 *@haystack: the string we're searching in
 *@needle: is the word we're searching for
 *Return: the address of the beginning of theh occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int x;


	x = 0;
	while (haystack[x] != '\0')
	{
		if (haystack[x] == needle[0])
		{
			if (checker(haystack, x, needle) == 1)
			{
				return (&haystack[x]);
			}
		}
		x++;
	}
	return (NULL);
}
