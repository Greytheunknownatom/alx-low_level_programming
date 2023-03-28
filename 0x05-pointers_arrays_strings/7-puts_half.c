#include "main.h"
/**
 * puts_half - this function prints half of a string
 * followed by a new line
 * @str: char to check
 * noskshade-melody
 * Return: 0
*/
void puts_half(char *str)
{
	int ding = 0, r;

	while (str[ding] != '\0')
		ding++;
	if (ding + 1 % 2 != '0')
		r = (ding - 1) / 2;
	else
		r = (ding / 2);
	r++;

	for (ding = r; str[ding] != '\0'; ding++)
	_putchar(str[ding]);
	_putchar('\n');
}
