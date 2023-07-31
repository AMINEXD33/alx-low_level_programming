#include "main.h"
/**
 * *_memset - fill the first n bytes with b, target is the s
 *@s: buffer array
 *@b: the value the function is using to fill
 *@n:number of bytes
 *Return: the adress to the buffer array
 */
char *_memset(char *s, char b, unsigned int n)
{
	n--;
	while (n != 0)
	{
		s[n] = b;
		n--;
	}
	s[n] = b;
	return (s);
}
