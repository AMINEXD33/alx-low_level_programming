#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates a string to another  src - > dest
 *
 *@dest: destination string
 *@src: source string
 *@n: the maximum bites copy
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int cursor;
	int cursorII;

	cursorII = 0;
	cursor = 0;
	while (1)
	{
		if (dest[cursorII] == '\0')
		{
			while (src[cursor] != '\0')
			{
				if (n > 0)
				{
					dest[cursorII] = src[cursor];
					cursor++;
					cursorII++;
				}

				else
				{
					break;
				}
				n--;
			}
			dest[cursorII] = '\0';
			break;
		}
		cursorII++;
	}
	return (dest);
}

