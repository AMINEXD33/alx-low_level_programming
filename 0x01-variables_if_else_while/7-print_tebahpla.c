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

	for (tracker = 0; tracker < 26 ; tracker++)
	{
		alphabet[tracker] = 'a' + tracker;
	}
	for (tracker = 25 ; tracker >= 0 ; tracker--)
	{
		printf("%c", alphabet[tracker]);
	}
	printf("\n");
	return (0);
}

