#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always Successful
*/

int main(int argc, char *argv[])
{
    int i;
    int x;
    char *ptr = (char *) main;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }
    x = atoi(argv[1]);
    if (x < 0)
    {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < x; i++)
    {
        printf("%02x", ptr[i] & 0xFF);
        if (i != x - 1)
            printf(" ");
    }
    printf("\n");
    return (0);
}