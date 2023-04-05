#include "main.h"
/**
* _strlen_recursion - this is a function that returns the length of a string
* prototype of the function - int _strlen_recursion(char *s)
* @s: string
* Return: int
*/
int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s)
	{
		t++;
		t += _strlen_recursion(s + 1);
	}
	return (t);
}
