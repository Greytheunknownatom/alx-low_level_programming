#include "main.h"
/**
* str_checker - this function checks if two strings are identical
* prototype for the function - int str_checker(cha *s1, char *s2, int i, int j)
* @s1: base address (string_1)
* @s2: base address (string_2)
* @i: index (left)
* @j: special index
* Return: if s is palindrome (1) if not (0)
*/
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/* noskshade */

/**
* wildcmp - this function checks if strings present
* could be considered identical
* prototype of the function - int wildcmp(char *s1, char *s2)
* @s1: string's base address
* @s2: string's base address
* Return: if strings considered identical (1)
*/
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
