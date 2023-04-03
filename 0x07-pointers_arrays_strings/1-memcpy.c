#include "main.h"
/**
* _memcpy - a function that copies memory area
* function prototype - char *_memcpy char *dest, char *src, umsigned int n
* @int n: function to initiate copy
* @char dest: copy to memory area
* @char src: copy bytes from memory area
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
 
