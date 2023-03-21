#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets x10 in lowercase
 * by thenoskshade
*/ 
void print_alphabet_x10(void)
{
	int nosk = 0;
	char shade;
									
	while (nosk++ <= 9)
	{
		for (shade = 'a'; shade <= 'z'; shade++)
			_putchar(shade);
		_putchar('\n')
	}
}
