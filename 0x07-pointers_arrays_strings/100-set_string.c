#include "main.h"
/**
 * set_string - giving a pointer a char value
 *@s: the pointer to pointer to a char
 *@to: a char value
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
