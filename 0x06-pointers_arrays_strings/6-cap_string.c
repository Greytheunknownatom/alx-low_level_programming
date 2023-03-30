#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @y: string
 * Return: address of y
*/
char *cap_string(char *y)
{
	int u = 0, p;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(y + u) >= 'a' && *(y + u) <= 'z')
	{
		if (u == 0)
			*(y + u) -= 'a' - 'A';
		else
		{
			for (p = 0; p <= 12; p++)
			{
				if (a[p] == *(y + u - 1))
					*(y + u) -= 'a' - 'A';
			}
		}
		u++;
	}
	return (y);
}
/* greyish */
