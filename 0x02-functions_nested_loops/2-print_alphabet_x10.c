#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times of alphabets in lowercase
 * noskshade,dreamwalking
*/
void print_alphabet_x10(void)
{
	char nosk;
	int shade;

	shade = 0;

	while (shade < 10)
	{
		nosk = 'a';
		while (nosk <= 'z')
		{
			_putchar(nosk);
			nosk++;
		}
		_putchar('\n');
		shade++;
	}
}
