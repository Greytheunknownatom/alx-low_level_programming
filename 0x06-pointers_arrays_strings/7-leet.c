#include "main.h"
/**
 * leet - function which encodes a string into 1337
 * @j: string to encode
 * Return: adress of j
*/
char *leet(char *j)
{
	int d, f;

	char a[] = "aAeEoOtTLl";
	char b[] = "4433007711";

	for (d = 0; *(j + d); d++)
	{
		for (f = 0; f <= 10; f++)
		{
			if (a[f] == j[d])
				j[d] = b[f];
		}
	}
	return (j);
}
/* noskshading */
