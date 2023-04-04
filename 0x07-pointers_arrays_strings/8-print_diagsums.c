#include "main.h"
/**
* print_diagsums - function that prints the sum of two diagonals of a matrix
* of square integers
* Prototype of function - void print_diagsums(int *a, int size)
* @a: pointer to begin the matrix
* @size: width of the matrix column
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int e, k, t, g = 0, f = 0;

	for (e = 0; e < size; e++)
	{
		t = (e * size) + e;
		g += *(a + t);
	}
	for (k = 0; k < size; k++)
	{
		t = (k * size) + (size - 1 - k);
		f += *(a + t);
	}
	printf("%d, %d\n", g, f);
}
