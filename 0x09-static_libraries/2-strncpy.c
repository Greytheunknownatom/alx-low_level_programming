#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: source of the string
 * @src: destination of the string
 * @n: length of int
 * Return: dest succesful
*/
char *_strncpy(char *dest, char *src, int n)
{

		int v;

		for (v = 0; v < n && *(src + v); v++)
		{
			*(dest + v) = *(src + v);
		}

		for (; v < n; v++)
		{
		*(dest + v) = '\0';
		}
		return (dest);
}
