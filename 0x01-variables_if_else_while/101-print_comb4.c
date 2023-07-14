#include <stdio.h>
/**
* main - Entry point
* Description: print alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
	int tracker; 
	int tracker2;
       	int tracker3;

	for (tracker = 0; tracker <= 7; tracker++)
	{
		for (tracker2 = tracker + 1; tracker2 <= 8; tracker2++)
		{
			for (tracker3 = tracker2 + 1; tracker3 <= 9; tracker3++)
			{
				putchar(tracker + '0');
				putchar(tracker2 + '0');
				putchar(tracker3 + '0');
				if (tracker != 7 || tracker2 != 8 || tracker3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
