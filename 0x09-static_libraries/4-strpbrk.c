#include "main.h"
#include <stddef.h>
/**
* _strpbrk - this function searches a string for any bytes in set
* prototype for function - char *_strpbrk(char *s, char *accept)
* @s: strings first occurance
* @accept: match of (s) or NULL: if no such byte
* Return: (s) in match of a byte in accept if ! return to (NULL)
*/
char *_strpbrk(char *s, char *accept)
{
	int l;
		while (*s)
		{
			for (l = 0; accept[l]; l++)
			{
				if (*s == accept[l])
					return (s);
			}
			s++;
		}
		return (NULL);
}
