#include "dog.h"
#include <stdlib.h>
/**
* init_dog - this initializes a variable of the type struct dog
* @d: struct dog
* @name:char
* @age:float
* @owner: char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
