#include "main.h"
/**
* rot13 - this is a function that encodes a string using rot13
* @p: string to encode
* Return: the address of s
*/
char *rot13(char *p)
{
	int t, k;
	char g[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char h[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (t = 0; *(p + t); t++)
	{
		for (k = 0; k < 52; k++)
		{
			if (g[k] == *(p + t))
			{
				*(p + t) = h[k];
				break;
			}
		}
	}
	return (p);
}
