#include "variadic_functions.h"
/**
* print_strings - function that prints strings followed by a new line
* prototype for the function -
* void print_strings(const char *separator, const unsigned int n, ...)
* @n: number of string passed to the function
* @separator: a string used to separate strings
* Return: (0)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int g;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (g = 0; g < n; g++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (g < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
