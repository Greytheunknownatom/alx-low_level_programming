#include "main.h"
/**
 * swap_int - this function swaps the values of two integers
 * @a: An integer to be swapped
 * @b: second integer to be swapped
 * noskshade
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int grey;

	grey = *a;

	*a = *b;

	*b = grey;
}
