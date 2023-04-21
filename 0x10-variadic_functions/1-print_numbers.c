#include "variadic_functions.h"
/**
* print_numbers - function that prints numbers followed by anew line
* prototype for the function -
* void print_numbers(const char *separator, const unsigned int n, ...)
* @n: number of parameter
* @separator: seperator btw two numbers
* Return: (0)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int k;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(ap, int));
		if (k < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
