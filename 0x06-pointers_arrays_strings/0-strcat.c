#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int cursor;
	int cursorII;
	
	cursorII = 0;
	cursor = 0;
	while (1)
	{
		if (dest[cursorII] == '\0')
		{
			dest[cursorII] = ' ';
			cursorII++;
			while(src[cursor] != '\0')
			{
				dest[cursorII] = src[cursor];
				cursor++;
				cursorII++;
			}
			dest[cursorII] = '\0';
			break;	
		}
		cursorII++;
	}
	return (dest);
}
