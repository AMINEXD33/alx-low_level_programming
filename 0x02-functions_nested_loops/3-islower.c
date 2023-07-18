#include "main.h"
/**
*_islower - check
*
* Description: 'checks if the char passed is lowercase'
*@c : c- is the ascci representation of a letter
* Return:  1 (Success) -> lower , 0 (Fail) -> not lower.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
