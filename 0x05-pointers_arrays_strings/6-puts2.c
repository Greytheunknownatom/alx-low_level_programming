#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: char to check
 * noskshader
 * Return: 0
*/
void puts2(char *str)
{
	int ring;

	for (ring = 0; str[ring] != '\0'; ring++)
	if (ring % 2 == 0)
		_putchar(str[ring]);
	_putchar('\n');
}
