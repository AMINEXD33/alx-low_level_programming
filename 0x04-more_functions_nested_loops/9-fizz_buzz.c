#include <stdio.h>
/**
 *  main - check the code
 * Description : from 1 to 100 ,  Fizz for multiples of 3
 * Buzz for multiple of 5 , and FizzBuzz for both
 * Return: Always 0.
 */
int main(void)
{
	int X;
	int Y;
	int flag1;/*boolean values*/
	int flag2;/*boolean values*/

	flag1 = 0;
	flag2 = 0;
	for (X = 1 ; X <= 100 ; X++)
	{
		for (Y = 1; Y <= X; Y++)
		{
			if ((3 * Y)  == X)
				flag1 = 1;
			if ((5 * Y) == X)
				flag2 = 1;
			if ((5 * Y) > X && (3 * Y) > X)
				break;
		}
		if (flag1 == 1 && flag2 == 1)
			printf("FizzBuzz");
		else if (flag1 == 1 && flag2 == 0)
			printf("Fizz");
		else if (flag1 == 0 && flag2 == 1)
			printf("Buzz");
		else
		{
			printf("%d", X);
		}
		if (X < 100)
			printf(" ");
		/*reset flags for next loop*/
		flag1 = 0;
		flag2 = 0;
	}
	printf("\n");
	return (0);
}
