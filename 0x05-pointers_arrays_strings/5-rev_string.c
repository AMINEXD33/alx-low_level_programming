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

	MAX = 0;
	MIN = 0;
	while (s[MAX] != '\0')
	{
		MAX++;
	}
	if (MAX > 0)
	{
		MAX--;
		printf("%d", MAX);
		while ((MAX != MIN) && (MAX > MIN) && (MAX >= 0))
		{
			tmp = s[MAX];
			s[MAX] = s[MIN];
			s[MIN] = tmp;
			MAX--;
			MIN++;
		}
	}
}
