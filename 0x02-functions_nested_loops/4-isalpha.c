#include "main.h"
/**
*_isalpha- alpha or not
*
* Description: 'check if the number represents an alpha value or not'
* @c: int representation
*
* Return:  0 (False) , 1 (True)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
