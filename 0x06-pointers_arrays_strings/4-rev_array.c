#include "main.h"
/**
 * reverse_array - it does exactly as the name say nothing more , nothing less
 *
 *@a: int array
 *@n: the length of the array n
 */
void reverse_array(int *a, int n)
{
	int n_rev;
	int tmp;

	n_rev = 0;
	n--;
	while (n >= n_rev)
	{
		if (n_rev != n)
		{
			tmp = a[n_rev];
			a[n_rev] = a[n];
			a[n] = tmp;
		}
		n--;
		n_rev++;
	}
}
