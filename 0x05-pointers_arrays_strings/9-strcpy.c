#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * to dest
 * @dest: char to check
 * @src: char to check
 * thenoskshader
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int w;

	for (w = 0; src[w] != '\0'; w++)
		dest[w] = src[w];
	dest[w] = '\0';
	return (dest);
}
