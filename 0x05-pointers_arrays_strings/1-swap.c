#include "main.h"
/**
 * swap_int - swap two integers
* @ a : int var
* @ b : int var
* Return : None
*/
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}
