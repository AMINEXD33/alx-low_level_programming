#include <stdio.h>
/**
* main - Entry point
* Description: print alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[26];
	int tracker;

	for (tracker = 0 ; tracker < 26 ; tracker++)
	{
		if ((('a' + tracker) != 'q)' && (('a' + tracker) != 'e'))
		{
			alphabet[tracker] = 'a' + tracker;
		}
	}
	for (tracker = 0 ; tracker < 26 ; tracker++)
	{
		if (alphabet[tracker])
		{
			printf("%c", alphabet[tracker]);
		}
	}
	printf("\n");
	return (0);
}

