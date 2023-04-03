#include "main.h"
#include <stddef.h>

/**
* _strchr - function that would locate a character in a string
* protoype for function - char *_strchr(char *s, char c)
* @c: character's occurance
* @s: the string, the character occures
* Return: occurrence (c) or (null) if !
*/
char *_strchr(char *s, char c)
{
	while (*s)
{

	if (*s != c)
		s++;
	else
		return (s);
}
	if (c == '\0')
		return (NULL);
	return (s);
}
