#include "main.h"
/**
*largest_number - returns the largest of 3 numbers
*@a: first integer
*@b: second integer
*@c: third integer
*Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int x;
	int largest;
	int list_[2];

	list_[0] = b;
	list_[1]  = c;
	largest = a;
	for (x = 0 ; x <= 1; x++)
	{
		if (list_[x] > largest)
		{
			largest = list_[x];
		}
	}
	return (largest);
}
