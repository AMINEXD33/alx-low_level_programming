#include <stdio.h>
/**
* main - Entry point
* Description: print alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
	int tracker;

	for (tracker = 0 ; tracker < 10 ; tracker++)
	{
		if (tracker != 0)
		{
			putchar(',');
		}
		if (tracker != 0)
		{
			putchar(' ');
		}
		putchar('0' + tracker);
	}
	putchar('\n');
	return (0);
}
