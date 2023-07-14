#include <stdio.h>
/**
* main - Entry point
* Description: print alphabet
* Return: Always 0 (Success)
*/
int main(void)
{
	int tracker;
	char tmp_char[10];

	for (tracker = 0 ; tracker < 10 ; tracker++)
	{
		tmp_char[tracker] = '0' + tracker;
	}
	for (tracker = 0 ; tracker < 10 ; tracker++)
	{
		printf("%c", tmp_char[tracker]);
	}
	printf("\n");
	return (0);
}
