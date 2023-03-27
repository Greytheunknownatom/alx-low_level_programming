#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 * noskshades
 * @s: string to print
 * Return: void
*/
void print_rev(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	{
		e++;
	}

	for (e -= 1; e >= 0; e--)
	{
		_putchar(s[e]);
	}

	_putchar('\n');
}
