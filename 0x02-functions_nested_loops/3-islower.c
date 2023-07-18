#include "main.h"
/**
*_islower - check
*
* Description: 'checks if the char passed is lowercase'
*
* Return:  1 (Success) -> lower
* Return:   0 (Fail) -> not lower
*/
int _islower(int c)
{
	if ( 97<=c<=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
