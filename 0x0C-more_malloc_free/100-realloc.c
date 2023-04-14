#include "main.h"
/**
* _realloc - this function reallocates a memory block using malloc and free
* prototype for this function -
* void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
* @ptr: pointer to the memory previously allocated
* @old_size: this is the size in bytes but of the allocated space for ptr
* @new_size: this is the new size of the new memory block in bytes
* Return: (NULL) OR pointer allocates new memory size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *g;
	unsigned int q, w = new_size;
	char *oluisold = ptr;

	if (ptr == NULL)
	{
		g = malloc(new_size);
		return (g);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	g = malloc(new_size);
	if (g == NULL)
		return (NULL);
	if (new_size > old_size)
		w = old_size;
	for (q = 0; q < w; q++)
		g[q] = oluisold[q];
	free(ptr);
	return (g);
}

