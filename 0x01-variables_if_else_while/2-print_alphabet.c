#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabet'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha_count;

	alpha_count = 0;
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
		, 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	for (alpha_count ; alpha_count <= sizeof(alphabet) ;  alpha_count++)
	{
		putchar(alphabet[alpha_count]);
	}
}
