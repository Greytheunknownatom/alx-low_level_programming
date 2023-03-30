#include "main.h"
/**
 * string_toupper - this function that changes all lowercase
 * letters of a string to uppercase
 * @d: string
 * Return: char
*/
char *string_toupper(char *d)
{

	int r;

	r = 0;

	while (*(d + r))
	{
		if (*(d + r) >= 'a' && *(d + r) <= 'z')
			*(d + r) -= 'a' - 'A';
		r++;
	}
	return (d);
}
