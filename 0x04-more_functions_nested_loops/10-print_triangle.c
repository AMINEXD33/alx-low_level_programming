#include "main.h"
/**
 * print_triangle - it just prints a triangle :|
 *@size : is the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int X;
	int Y;
	int I;

	Y = size - 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (X = 0 ; size > X ; X++)
	{
		for (I = 0; I < Y; I++)
		{
			_putchar(' ');
		}
		for (I = 0; I <= X; I++)
		{
			_putchar('#');
		}
		_putchar('\n');
		Y--;
	}
}
