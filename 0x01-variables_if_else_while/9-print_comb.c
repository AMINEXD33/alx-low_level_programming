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
		if (tracker == 0)
		{
			putchar('0');
		}
		else
		{
			putchar(',');
			putchar(' ');
			putchar('0' + tracker);
		}
	}
	return (0);
}
