#include "main.h"
/**
* print_alphabet 
*
* Description: 'prints all the alphabet and a new line'
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;
	char alpha = 'a';

	for (i = 0; i <= 25; i++)
	{
		_putchar(alpha + i);
	}
	_putchar('\n');
}

