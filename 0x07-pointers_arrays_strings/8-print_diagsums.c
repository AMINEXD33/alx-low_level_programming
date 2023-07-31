#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagnels of a matrix
 *@a: matrix (2D list)
 *@size: size of the matrix
 *Return: None
 */
void print_diagsums(int *a, int size)
{
	int X;
	int summ;
	int summ2;

	summ2 = 0;
	summ = 0;
	X = 0;
	while (size != X)
	}
		summ += a[X * size + X];
		X++;
	}
	X = 0;
	while (size !=  X)
	{
		summ2 += a[X * size + (size - 1 - X)];
		X++;
	}
}
