#include <stdio.h>

/**
 * gcd - Calculate the greatest common divisor using the Euclidean algorithm
 * @X: First number
 * @Y: Second number
 * Return: Greatest common divisor of X and Y
 */
unsigned long gcd(unsigned long X, unsigned long Y)
{
    while (Y != 0)
    {
        unsigned long tmp;

        tmp = Y;
        Y = X % Y;
        X = tmp;
    }
    return X;
}

/**
 * PX - Pollard's p-1 algorithm to find factors of n
 * @n: Number to factorize
 * @MAX: Maximum number of iterations for the algorithm
 * Return: A non-trivial factor of n, or 0 if not found
 */
unsigned long PX(unsigned long n, unsigned long MAX)
{
    unsigned long i;
    unsigned long f;

    unsigned long A = 2;
    for (i = 2; i <= MAX; i++)
    {
        A = (A * A) % n;
        f = gcd(A - 1, n);
        if (1 < f && f < n)
        {
            return f;
        }
    }
    return 0;
}

/**
 * largest_PRIMEFACTOR - Function to find the largest prime factor of n
 * @n: Number to find the largest prime factor of
 * Return: Largest prime factor of n
 */
unsigned long largest_PRIMEFACTOR(unsigned long n)
{
    unsigned long MAX = 2000000;
    while (1)
    {
        unsigned long fac = PX(n, MAX);
        if (fac == 0)
        {
            return n;
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
    unsigned long num = 612852475143;
    unsigned long LARGEST = largest_PRIMEFACTOR(num);
    printf("%lu\n", LARGEST);
    return 0;
}

