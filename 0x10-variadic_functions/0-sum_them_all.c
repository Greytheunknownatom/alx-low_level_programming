#include <stdarg.h> 
#include "variadic_functions.h"
/**
* sum_them_all - this function reeturns the sum to all its parameters
* prototype for the function - int sum_them_all(const unsigned int n, ...)
* @n: unsigned int no of passed parameters
* Return: (0)
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int w;
	va_list ap;
	
	va_start(ap, n);

	if (n == 0)
		return (0);

	for (w = 0; w < n; w++)
		sum += va_arg(ap, int);

	va_end(ap);
	
	return (sum);
}

