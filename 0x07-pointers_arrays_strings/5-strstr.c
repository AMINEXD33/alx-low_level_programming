#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strstr - loops over string and find the first occurence of a needle
 *@s: the string we're searching in
 *@needle: is the word we're searching for
 *Return: the address of the beginning of theh occurence
 */
char *_strstr(char *s, char *needle)
{
	for (; *s != '\0' ; s++)
	{
		char *X = s;
		char *Y = needle;

		while (*X == *Y && *Y != '\0')
		{
			X++;
			Y++;
		}
		if (*Y == '\0')
			return (s);
	}
	return (NULL);
}
