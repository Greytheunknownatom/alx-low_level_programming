#include "main.h"
/**
* _memset - this function fills memory with a constant byte
* learning
* @b: this is the memory area pointer
* @n: memory bytes area
* @s: constant byte points @n of byte memory area
* Return: (s)
*/
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int u = 0;

	while (u < n)
	{
	s[u] = b;
	u++;
	}
	return (s);
}
