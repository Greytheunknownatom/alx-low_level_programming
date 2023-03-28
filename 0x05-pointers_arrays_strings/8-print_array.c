#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n as an element of integers
 * followed by a new line
 * @a: int to be checked
 * @n: int to be checked
 * noskshader
 * Return: 0
*/
void print_array(int *a, int n)
{
	int f;

	for (f = 0; f < n; f++)
		if (f != n - 1)
		printf("%d, ", a[f]);
		else
			printf("%d", a[f]);
printf("\n");
}
