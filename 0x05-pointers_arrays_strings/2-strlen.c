#include "main.h"
/**
 *  _strlen - just like strlen
 *  @s : is a char
 *  Description : return the lenfth of atring
 *  Return: sizeof char list
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
