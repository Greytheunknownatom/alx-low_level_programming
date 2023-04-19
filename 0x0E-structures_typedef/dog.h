#ifndef DOG_H
#define DOG_H

/**
* struct dog - this is a new type "struct dog" with the basic info of a dog
* @name:char
* @age: float
* @owner: char to check
* be right back
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*dog_t - the typedef for struct dog*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *my_dog;
#endif
