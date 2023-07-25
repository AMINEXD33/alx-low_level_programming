#include <stdio.h>
#include <stdlib.h>
/**
 *generate - generate a password for 101-keygen.c
 *
 *Description: after looking at the assembly code and reverce 
 *engineering it i was looking at a if statmenr that basically 
 *goes throught  a string , and as it go it sums the ascii value of 
 *every letter and and based on it >>> if (sum == 2772) it passes
 *so my goes is to just generate a string collection that sums to 2772
 *doing this (2772 % (ASCII CODE OF A LETTER)) , for example i've got 0
 *in this exampe by using "B", so i just generated X*"B" that ,validate the 
 *if statment giving us ("B"*42)  = 2772
 */
void  generate()
{
    
    int value = 0;
    int standard = (int) * "B";
    int count = 0;
    char *password;
    int counter;
    while (value <= 2772)
    {
        if (value + standard > 2772)
            break;
        value = value + standard;
        count++;
    }
        
    password = (char*)malloc((count +1) * sizeof(char));
    counter = 0;
    while (counter <= count)
    {
        if (count == counter)
        {
            password[counter] = '\0';
            break;
        }
        password[counter] = 'B';
        counter++;
    }
   printf("%s", password);
}
/**
 *main - entry point
 *
 *Return:Always (0)
 *
 */
int main()
{
	generate();
	return (1);
}
