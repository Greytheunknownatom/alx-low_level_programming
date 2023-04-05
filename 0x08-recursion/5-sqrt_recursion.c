#include "main.h"
/**
* _sqrt_recursion - this is a function that returns
* the natural square root of a number
* prototype of the function - int _sqrt_recursion(int n)
* @n: int to find sqrt of
* @o: int
* @m: int
* Return: int or return natural root or (-1)
*/
int check(int o, int m)
{
	if (o * o == m)
		return (o);
	
	if (o * o > m)
		return (-1);

	return (check(o + 1, m));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
