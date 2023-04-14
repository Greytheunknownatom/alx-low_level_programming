#include "main.h"
/**
* malloc_checked - this function allocates memory using malloc
* protptype fot this function - void *malloc_checked(unsigned int b)
* @b: unsigned int (allocated memory)
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *t;
	
	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
	
