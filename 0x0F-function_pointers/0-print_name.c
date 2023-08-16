#include "function_pointers.h"
/**
*print_name-a function to a function
*@name: the name
*@f: address of the function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
