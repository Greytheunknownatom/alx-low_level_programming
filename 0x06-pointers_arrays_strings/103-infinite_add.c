#include "main.h"
/**
* infinite_add - this function adds two numbers
* where n1 and n2 are two numbers
* @n1: numbers 
* @n2: numbers
* @r: buffer for result
* @size_r: buffer size
* Return: return to 0 if result can not be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int k, j, d, b, q, h;

	for (k = 0; n1[k]; k++)
		
	for (j = 0; n2[j]; j++)
		
	if (k > size_r || j > size_r)
		return (0);
	q = 0;
	for (k -= 1, j -= 1, d = 0; d < size_r - 1; k--, j--, d++)
	{
		h = q;
		if (k >= 0)
			h += n1[k] - '0';
		if (j >= 0)
			h += n2[j] - '0';
		if (k < 0 && j < 0 && h == 0)
		{
			break;
		}
		q = h / 10;
		r[d] = h % 10 + '0';
	}
	r[d] = '\0';
	if (k >= 0 || j >= 0 || q)
		return (0);
	for (d -= 1, b = 0; b < d; d--, b++)
	{
		q = r[d];
		r[d] = r[b];
		r[b] = q;
	}
	return (r);
}
