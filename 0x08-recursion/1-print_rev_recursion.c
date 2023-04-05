#include "main.h"
/**
* _print_rev_recursion - this function prints a string in reverse
* prototype for the function - void _print_rev_recursion(char *s)
* @s: string
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
