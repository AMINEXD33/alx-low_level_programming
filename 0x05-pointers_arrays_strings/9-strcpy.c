#include "main.h"
/**
 * *_strcpy - copy a char list to another
 *@dest: distination char list
 *@src: src char list
 *Return: None
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1)
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = src[i];
		i++;

	}
}
