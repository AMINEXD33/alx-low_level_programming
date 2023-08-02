#include "main.h"
/**
 * _strlen_recursion - using recursion to get the length of the string
 *@s: the string
 *Return: length
 */
int _strlen_recursion(char *s)
{
	static int count;

	if (*s ==  '\0')
	{
		return (count);
	}
	count++;
	_strlen_recursion(s + 1);
	return (count);
}
