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

	for (tracker = 0 ; tracker < 10 ; tracker++)
	{
		for (tracker2 = 1 ; tracker2 < 10 ; tracker2++)
		{
			if ((tracker + '0') < (tracker2 + '0'))
			{
				if (tracker != tracker2)
				{
					if (tracker != 0 ||  tracker2 != 1)
					{
						putchar(',');
						putchar(' ');
					}
					putchar('0' + tracker);
					putchar('0' + tracker2);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
