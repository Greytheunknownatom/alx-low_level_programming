#include "main.h"
/**
* factorial - this function returns the factorial
* of a given number
* prototype of the function - int factorial(int n)
* @n: int to be checked
* Return: (-1) if n is < 0 or int
*/
int factorial(int n)
{
	int h;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		h = n * factorial(n - 1);
	}
			return (h);
}
