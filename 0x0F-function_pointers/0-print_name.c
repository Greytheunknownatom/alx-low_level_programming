#include "function_pointers.h"
/**
* print_name - this function prints a name
* prototype for the function -
* void print_name(char *name, void (*f)(char *))
* @name: the given name
* @f: name's function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
