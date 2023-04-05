#include "main.h"
/**
* _pow_recursion - function that returns the value
* of x raised to power of y
* prototype of the function - int _pow_recursion(int x, int y)
* @y: int to be checked
* @x: 2nd int to be checked
* Return: (-1) if y < 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
