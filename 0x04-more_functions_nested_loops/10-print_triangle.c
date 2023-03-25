#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		int q, k;

		for (q = 1; q <= size; q++)
		{
			for (k = q; k < size; k++)
			{
				putchar(' ');
			}

			for (k = 1; k <= q; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
