#include "3-calc.h"
/**
*op_add- add two numbers a and b
*@a: number
*@b: number
*Return: a+b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub- subtract two numbers
*@a:number
*@b:number
*Return: a-b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
*op_mul- multiply two numbers
*@a:number
*@b:number
*Return: a*b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div-divide two numbers
*@a:number
*@b:number
*Return: a/b or exit(100) if b == 0
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod-reminder of two numbers
 *@a:number
 *@b:number
 *Return: a%b or exit(100) if b == 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
