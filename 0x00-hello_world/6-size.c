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
	printf("Size of a char: %d\n byte(s)", sizeof(char));
	printf("Size of an int: %d\n byte(s)", sizeof(int));
	printf("Size of a long int: %d\n byte(s)", sizeof(long int));
	printf("Size of a long long: %d\n byte(s)", sizeof(long long int));
	printf("Size of float: %d\n byte(s)", sizeof(float));
	return (0);
}
