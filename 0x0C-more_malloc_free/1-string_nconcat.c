#include "main.h"
/**
* string_nconcat - the function concatenates two strings
* prototype for this function -
* char *string_nconcat(char *s1, char *s2, unsigned int n)
* @s1: 1st char
* @s2: 2nd char
* @n: unsigned int
* Return: return NULL if function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int b, y, e;
	char *f;

	if (s1 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; s1[b]; ++b)
		;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	f = malloc(sizeof(char) * (b + y + 1));

	if (f == NULL)
		return (NULL);
	for (e = 0; e < b; e++)
		f[e] = s1[e];
	for (e = 0; e < y; e++)
		f[e + b] = s2[e];
	f[b + y] = '\0';
	return (f);
}
