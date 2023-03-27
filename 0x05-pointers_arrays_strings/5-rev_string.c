#include "main.h"
/**
 * rev_string - function that prints a string in reverse
 * @s: input string
 * nosk
 * Return: string in reverse
*/
void rev_string(char *s)
{
	int d = 0, c, t;
	char dev;

	while (s[d] != '\0')
	{
		d++;
	}
	t = d - 1;
	for (c = 0; t >= 0 && c < t; t--, c++)
	{
		dev = s[c];
		s[c] = s[t];
		s[t] = dev;
	}
}
