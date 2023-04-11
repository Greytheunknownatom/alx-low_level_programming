#include "main.h"
/**
* str_concat - function that concatenates(links) two strings
* prototype for the function - char *str_concat(char *s1, char *s2)
* @s1: first string
* @s2: second string
* Return: NULL on failure , NULL is passed treat as empty string
*/
char *str_concat(char *s1, char *s2)
{
	int fr, ed, buys1, buys2, buys;

	char *costs;

	buys1 = buys2 = 0;

	if (s1 != NULL)
	{
		fr = 0;
		while (s1[fr++] != '\0')
			buys1++;
	}

	if (s2 != NULL)
	{
		fr = 0;
		while (s2[fr++] != '\0')
			buys2++;
	}

	buys = buys1 + buys2;
	costs = (char *)malloc(sizeof(char) * (buys + 1));
	if (costs == NULL)
		return (NULL);

	for (fr = 0; fr < buys1; fr++)
		costs[fr] = s1[fr];

	for (ed = 0; ed < buys2; ed++, fr++)
		costs[fr] = s2[ed];
	costs[buys] = '\0';

	return (costs);
}
