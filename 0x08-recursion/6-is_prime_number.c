#include "main.h"
/**
* _is_prime_number - function that returns 1 if the input
* integer is a prime number
* prototype for the function - int is_prime_number(int n)
* @n: int
* @f: int
8 @g: int
* Return: int for both fuctions 
*/
int check(int f, int g)
{
	if (f < 2 || g % f == 0)
		return (0);
	
	else if (f > g / 2)
		return (1);

	else 
		return (check(f + 1, g));
}

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
} 
