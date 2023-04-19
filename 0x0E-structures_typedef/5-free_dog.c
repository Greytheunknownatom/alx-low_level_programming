#include <stdlib.h>
#include "dog.h"
/**
* free_dog - this function is written to free dogs
* prototype for the function - void free_dog(dog_t *d)
* @d: pointer to dog to free
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
