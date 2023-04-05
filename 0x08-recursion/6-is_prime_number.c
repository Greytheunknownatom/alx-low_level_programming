#include "main.h"
/**
* check - checks to see if number is prime
* @f: int
* @g: int
* Return: int
*/
int check(int f, int g)
{
	if (g < 2 || g % f == 0)
		return (0);

	else if (f > g / 2)
		return (1);

	else
		return (check(f + 1, g));
}

/**
* is_prime_number - function that returns 1 if the input
* integer is a prime number
* prototype for the function - int is_prime_number(int n)
* @n: int to be checked
* Return: int
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
