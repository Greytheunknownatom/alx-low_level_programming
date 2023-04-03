#include "main.h"
/**
* _strspn - THIS FUNCTION GETS THE LENGTH OF A PREFIX SUBSTRING
* protoype for function - unsigned int _strspn(char *s, char *accept)
* @s: on set segment of length
* @accept: length size of bytes
* Return: length (s) from *accept
*/
unsigned int _strspn(char *s, char *accept)
{	
	int a = 0, c, e;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] != 32)
		{
			for (e = 0; accept[e] != '\0'; e++)
			{
				if (s[c] == accept[e])
					a++;
			}
		}
		else
	
		return (a);
	}
	return (a);
}
