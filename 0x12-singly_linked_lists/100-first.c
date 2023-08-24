#include <stdio.h>
void print_befor(void) __attribute__((constructor));
/**
 * print_befor-a function that prints befor the main function
 */
void print_befor(void)
{
	printf("You're beat! and yet, you must ");
	printf("allow,\nI bore my house upon my back!\n");
}
