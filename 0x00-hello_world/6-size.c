#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print all the size of the variable , depending on the system
 *(32 or 64)'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sizes[] = {sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof (float)};
	char *sentences[] = {"a char", "an int", "a long", "a long long integer", "a float"};
	for (int i = 0; i < sizeof(sizes) / sizeof(sizes[0]); i++)
	{
		printf("Size of %s: %d\n", sentences[i], sizes[i]);
	};
	return	(0);
}
