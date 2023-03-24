#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * noskshading
 * @c:to be checked
 * Return: 1 if c is uppercase
 * 0 otherwise
*/
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));

	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
