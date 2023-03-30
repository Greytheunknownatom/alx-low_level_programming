#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: integer
 * dreamwalking nosk
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int h, d;

	for (h = 0; (h < (n - 1) / 2); h++)
	{
		d = a[h];
		a[h] = a[n - 1 - h];
		a[n - 1 - h] = d;
	}
}
