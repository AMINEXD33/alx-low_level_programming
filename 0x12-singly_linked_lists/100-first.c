#include <stdio.h>
void print_befor(void) __attribute__((constroctor));
/**
 * print_befor-a function that prints befor the main function
 */
void print_befor(void)
{
	printf("You're beat! and yet, you must
	allow,\nI bore my house upon my back!\n");
}
