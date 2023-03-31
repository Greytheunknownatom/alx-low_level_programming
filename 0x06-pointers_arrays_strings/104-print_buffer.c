#include "main.h"
#include <stdio.h>
/**
* print_buffer - prints buffer
* @b: buffer
* @size: size of buffer
* Return: void
*/
void print_buffer(char *b, int size)
{
	int i, m, o;
	i = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		m = size - 0 < 10 ? size - 0 : 10;
		printf("%08x: ", i);
		for (o = 0; o < 10; o++)
		{
			if (o < m)
				printf("%02x", *(b + i + o));
			else
				printf(" ");
			if (o % 2)
			{
				printf(" ");
			}
		}
		for (o = 0; o < m; o++)
		{
			int c = *(b + i + o);
												if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		i += 10;
	}
}
