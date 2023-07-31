#include "main.h"
#include <stdio.h>
/**
 *is_in - simple function to check if a char in a string
 *@accept: the string
 *@target: targeted char
 *Return: 1 if it is in string , 0 if not
 **/
int is_in(char *accept, char target)
{
	int x;

	x = 0;
	while (accept[x] != '\0')
	{
		if (accept[x] == target)
		{
			return (1);
		}
		x++;
	}
	return (0);
}
/**
 * _strspn - returns the len of a word that contains only chars from a prefix
 *@s: string
 *@accept:prefix
 *Description:
 *	I)	we enitialize the flag to 1 , cursor to x , and valid to 1.
*		as we progress we need to keep track of the start of the
*		word(cursor).
*
*		and wether or not we're at the begining of a new word (valid).
*		 and finally we want to know if the word has all chars from
*		prefix (flag),
*
*		it keeps the value 1 until the word does not contain all chars from
*		prefix.
*
*	II) if the current char is not alpha , that means we've reached the end of
*		the word,so we need to reset.
*
*		so we reasigne 0 to valid , to indecate that the previous word is
*		done , and we're at a new one.
*
*		cursor equal to x , because if the word is not valid that means
*		that it's length is 0,see if statment.
*
*Return: length of the first word that contains only letters from prefix
*
*
*/
unsigned int _strspn(char *s, char *accept)
{
	int valid;
	int x;
	int cursor; /*this var is going to track the star of each word*/
	int flag; /* stays 1 until some character didint match the prefix's*/

	x = 0;
	valid = 0;
	cursor = 0;
	flag = 1;
	while (1)
	{
		if ((s[x] >= 65  && s[x] <= 90) || (s[x] >= 97 && s[x] <= 122))
/*check if its aplpha*/
		{
			if (valid == 0)
/*when valid is 0 , that means we're at the beginning of a new word*/
			{
				flag = 1;
				cursor = x;
				valid = 1;
			}
			if (is_in(accept, s[x]) == 0)
/*when a char is not in prefix , the word no longer valid */
				flag = 0;
		}
		else
		{
			valid = 0;
			if (flag == 1)
/*if flag (word is valid) we will return the distence between the start*/
/* of the word and the end of it*/
				return (x - cursor);
			cursor = x;
		}
		if (s[x] == '\0')
			break;
		x++;
	}
	return (0);
}
