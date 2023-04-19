#include <stdlib.h>
#include "dog.h"

/**
* new_dog - this function creats a new dog
* prototype for the function -
* dog_t *new_dog(char *name, float age, char *owner)
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ne, le, y;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ne = 0; name[ne]; ne++)
		;
	ne++;
	dog->name = malloc(ne * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (y = 0; y < ne; y++)
		dog->name[y] = name[y];
	dog->age = age;
	for (le = 0; owner[le]; le++)
		;
	le++;
	dog->owner = malloc(le * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (y = 0; y < le; y++)
		dog->owner[y] = owner[y];
	return (dog);
}
