#include "main.h"
/**
* print_chessboard - function that prints chessboard of characters
* Prototype for function - void print_chessboard(char (*a)[8])
* @a: pointer to locate peices to print out
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int o, d;

	for (o = 0; o < 8; o++)
	{
		for (d = 0; o < 8; d++)
		{
			_putchar(a[o][d]);
		}
		_putchar('\n');
	}
}
