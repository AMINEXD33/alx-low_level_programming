#include "main.h"
#include <stdio.h>
/**
 *helper-goes from n to 1 , and checks if it divides by n-1 , un each recursion
 *@n: number
 *@D:devisor (n-1)
*Return: 1 if prime  ,0 otherwise
 */
int helper(int n, int D)
{
	if (D == 1)
	{
		return (1);
	}
	if (n % D == 0)
	{
		return (0);
	}
	return (helper(n, D - 1));
}
/**
 * is_prime_number - nadles negative numbers and start the helper function
 *@n: number
 *Return: 0 if not prime , 1 if prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (helper(n, n - 1));
}
