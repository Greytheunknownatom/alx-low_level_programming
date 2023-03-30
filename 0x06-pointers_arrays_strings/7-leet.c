#include "main.h"
/**
 * leet - function which encodes a string into 1337
 * @j: string to encode
 * Return: adress of s
*/
char *leet(char *j)
{
	int d, o;

	char a[] = "aAeEoOtIL";
	char b[] = "4433007711";

	for (d = 0; *(j + d); d++)
	{
		for (o = 0; o <= 9; o++)
		{
			if (a[o] == j[d])
				j[d] = b[o];
		}
	}
	return (j);
}
/* noskshading */
