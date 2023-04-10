#include "main.h"
/**
* _memcpy - a function that copies memory area
* function prototype - char *_memcpy char *dest, char *src, umsigned int n
* @n: function to initiate copy
* @dest: copy to memory area
* @src: copy bytes from memory area
* Return: (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
	dest[a] = src[a];
	a++;
	}
	return (dest);
}
