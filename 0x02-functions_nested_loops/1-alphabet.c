#include "main.h"
/**
*  print_alphabet - function
*
* Description: 'print the alphabet'
*
*Return: Always 0 (Success)
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
/**
* main - Entry point
*
* Description: 'runs the function alphabet'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}
