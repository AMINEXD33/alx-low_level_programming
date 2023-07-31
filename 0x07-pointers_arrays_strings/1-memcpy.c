#include "main.h"
/**
 * *_memcpy - copy n bytes from src to dist
 *@dest: is the destination
 *@src: source
 *@n: is the number of targeted bytes
 *Return: address of the dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	n--;
	while (n != 0)
	{
		dest[n] = src[n];
		n--;
	}
	dest[n] = src[n];
	return (dest);
}
