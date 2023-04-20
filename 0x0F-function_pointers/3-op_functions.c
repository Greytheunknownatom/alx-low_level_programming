#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - returns the sum of a & b
* prototype for the funcftion - int op_add(int a, int b)
* @a:int
* @b:int
* Return: sum (a + b)
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns the difference of a & b
* prototype for the function - int op_sub(int a, int b)
* @a:int
* @b:int
* Return: difference (a - b)
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns the product of a & b
* prototype for the function - int op_mul(int a, int b)
* @a: int
* @b: int
* Return: product (a * b)
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns division result
* protoype for the function - int op_div(int a, int b)
* @a: int
* @b: int
* Return: division (a / b)
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - returns the remainder of the division of two int
* prototype for the function - int op_mod(int a, int b)
* @a:int
* @b:int
* Return: remainder of division result btw the two int (a % b)
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
