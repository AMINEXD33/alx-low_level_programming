#include "main.h"
/**
 * _strcmp- compair the x1 and y1 from two strings
 * s1 and s2 , if the ascii of (x1 - x2) is smaller or greater
 * than 0 , then retur that diffrence and quit, else return 0
 * no miss matches found
 *@s1: first string
 *@s2: second string
 *Return: 0 if the strings match / (x) or (-x) if the strings are not an
 * match (By (x)  i mean any number != 0)
 */
int _strcmp(char *s1, char *s2)
{
	int cur;

	cur = 0;
	while (s1[cur] != '\0' && s2[cur] != '\0')
	{
		if (s1[cur] - s2[cur] > 0 || s1[cur] - s2[cur] < 0)
		{
			return (s1[cur] - s2[cur]);
		}
		else
		{
			cur++;
		}
	}
	return (0);

}
