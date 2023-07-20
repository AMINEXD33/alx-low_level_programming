#include <stdio.h>

/**
 * gcd - Calculate the greatest common divisor using the Euclidean algorithm
 * @X: First number
 * @Y: Second number
 * Return: Greatest common divisor of X and Y
 */
long long gcd(long long X, long long Y)
{
    while (Y != 0)
    {
        long long tmp;

        tmp = Y;
        Y = X % Y;
        X = tmp;
    }
    return (X);
}

/**
 * PX - Pollard's p-1 algorithm to find factors of n
 * @n: Number to factorize
 * @MAX: Maximum number of iterations for the algorithm
 * Return: A non-trivial factor of n, or 0 if not found
 */
long long PX(long long n, long long MAX)
{
    long long i;
    long long A = 2;
    for (i = 2; i <= MAX; i++)
    {
        A = (A * A) % n;
        long long f = gcd(A - 1, n);
        if (1 < f && f < n)
        {
            return (f);
        }
    }
    return (0);
}

/**
 * largest_PRIMEFACTOR - Function to find the largest prime factor of n
 * @n: Number to find the largest prime factor of
 * Return: Largest prime factor of n
 */
long long largest_PRIMEFACTOR(long long n)
{
    long long MAX = 2000000;
    long long fac;
    while (1)
    {
        fac = PX(n, MAX);
        if (fac == 0)
        {
            return (n);
        }
        n /= fac;
    }
}

/**
 * main - Entry point of the program
 * Return: Always 0
 */
int main(void)
{
    long long num = 612852475143;
    long long LARGEST = largest_PRIMEFACTOR(num);
    printf("%lld\n", LARGEST);
    return (0);
}

