#include "main.h"
/**
 *rev_string - reverse the instence of the string it self
 *@s : is the char var
 *Return: None
 */
void rev_string(char *s)
{
	int MAX;
	int MIN;
	int tmp;

	while (s[MAX] != '\n')
	{
		MAX++;
	}
	if (MAX > 0)
	{
		MAX--;
		while (1)
		{
			if (MAX == MIN || MAX < MIN)
			{
				break;
			}
			else
			{
				tmp = s[MAX];
				s[MAX] = s[MIN];
				s[MIN] = tmp;
				MAX--;
				MIN++;
			}
		}
	}
	else
	{
		return;
	}
}
