#include "main.h"
/**
* print_alphabet_x10-prints 10x alphabet
*
* Description: 'prints all the alphabet and a new line'
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int track_loops;
	int i;
	char alpha = 'a';

	track_loops = 0;
	while (track_loops  <  10)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar(alpha + i);
		}
		_putchar('\n');
		track_loops++;
	}
}

