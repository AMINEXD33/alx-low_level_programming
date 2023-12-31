#include "main.h"
/**
 *helper - binary search to get to naturale square root of n
 *@n: number
 *@start: start position
 *@end: end position
 *Return: (Naturale sq root of n )
 */
int helper(unsigned long n, unsigned long start, unsigned long end)
{
	if (start <= end)
	{
		unsigned long mid;
		unsigned long sq;


		mid = start + (end - start) / 2;
		sq = (unsigned long)mid * mid;
		if (sq == n)
		{
			return (mid);
		}
		else if (sq > n)
		{
			return (helper(n, start, mid - 1));
		}
		else
		{
			return (helper(n, mid + 1, end));
		}
	}
	return (-1);
}
/**
 *_sqrt_recursion - handle the case of n<0 , and start the binary search
 *@n: number
 *Return: the final result form help function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0, n));
}
