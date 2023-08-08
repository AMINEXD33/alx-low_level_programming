#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * len - calculate the length of a string
 *@X: string
 *Return: The length as an INT
 */
int len(char *X)
{
	int I;

	I = 0;
	while (X[I] != '\0')
	{
		I++;
	}
	return (I);
}
/**
 *argstostr - concat all args of the program
 *@ac: length of the array holding the args
 *@av: args array
 *Return:pointer to the str in heap , NULL if else
 */
char *argstostr(int ac, char **av)
{
	int x;
	int Bytes;
	char *Mem;
	int Memtracker;
	/*handle side cases*/
	if (ac == 0 || av == 0)
		return (NULL);

	Bytes = 0;
	for (x = 0; x < ac; x++)
	{
		Bytes += len(av[x]) + 1;
	}
	Bytes++; /*for adding the last byte of a string '\0'*/

	/*malloc the Mem needed*/
	Mem = malloc(sizeof(char) * Bytes);
	if (Mem == NULL)
		return (NULL);
	Memtracker = 0;
	for (x = 0; x < ac; x++)
	{
		for (Bytes = 0 ; av[x][Bytes] != '\0' ; Bytes++)
		{
			Mem[Memtracker] = av[x][Bytes];/*<<<<<<<<*/
			Memtracker++;
		}
		Mem[Memtracker] = '\n'; /*<<<<<<<<*/
		Memtracker++;
	}
	Mem[Memtracker] = '\0'; /*<<<<<<<<*/
	Memtracker++;
	return (Mem);
}

