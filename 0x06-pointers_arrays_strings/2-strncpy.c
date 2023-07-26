#include "main.h"
/**
 * *_strncpy - cpy a buffer from one to another
 *@dest: destination
 *@src: source
 *@n:number of bites to copy
 *Return: the dest address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cursor1;
	/*int flag;*/
	cursor1 = 0;
	while (n > 0 && src[cursor1] != '\0')
	{
		dest[cursor1] = src[cursor1];
		cursor1++;
		n--;
	}
	while (n > 0)
	{
		dest[cursor1] = '\0';
		n--;
		cursor1++;
	}
	return (dest);
}
