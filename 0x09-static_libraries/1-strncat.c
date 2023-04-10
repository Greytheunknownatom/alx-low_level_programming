#include "main.h"
/**
 * _strncat - this function concatenates two strings
 * @dest: char the source of strings
 * @src: char the destination of the string
 * @n: length of the int
 * Return: string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int o, b;

	for (o = 0; dest[o] != '\0'; o++)
	{
	continue;
	}

	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[o + b] = src[b];
	}
	dest[o + b] = '\0';
	return (dest);
}
