#include "main.h"
/**
 * _puts - this function prints out the length of a string and returns
 * @str: the string
 * noskshade
 * Return: the length of the string
*/
void _puts(char *str)
{
	int grey = 0;

	while (str[grey] != '\0')
	{
		_putchar(str[grey]);
		grey++;
	}
	_putchar('\n');
}
