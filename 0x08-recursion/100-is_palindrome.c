#include "main.h"
/**
* _strlen_recursion - function is to print the length of a string
* prototype of the function - int _strlen_recursion(char *s)
* @s: the string to print
* Return: the length of string
*/
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
* pal_checker - checks if *s is a palindrome
* @s: base address of string
* @i: index (right)
* @j: index (left)
* Return: if palindrome is s (1) !s (0)
*/
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j  / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
		else
			return (0);
}

/**
* is_palindrome - this function checks for a palindrome
* prototype for function - int is_palindrome(char *s)
* @s: string's base address
* Return: if n = prime (1), n != prime (0)
*/
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
