#include "main.h"
/**
* check - checks for square root
* @o: int
* @m: int
* Return: int
*/
int check(int o, int m)
{
	if (o * o == m)
		return (o);

	if (o * o > m)
		return (-1);

	return (check(o + 1, m));
}
/**
* _sqrt_recursion - returns the natural square root of a
* number
* @n: integer to find suareroot of
* Return: int or return natural root or (-1)
* prototype of the function - int _sqrt_recursion(int n)
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
