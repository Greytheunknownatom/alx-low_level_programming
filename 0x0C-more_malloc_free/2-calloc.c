#include "main.h"
/**
* _calloc - this function allocates memory for an array still using malloc
* protoype for this function -
* void *_calloc(unsigned int nmemb, usigned int size)
* @nmemb: this allocates memory for the array
* @size: this allocates the element of size bytes
* Return: pointer to memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (f = 0; f < (nmemb * size); f++)
		n[f] = 0;
	return (n);
}
