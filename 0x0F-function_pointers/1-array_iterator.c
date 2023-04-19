#include "function_pointers.h"
/**
* array_iterator - this function is given as a parameter on each array element
* prototype for the functioon -
* void array_iterator(int *array, size_t size, void (*action)(int));
* @array: array to execute the function on
* @size: array size
* @action: pointer to function to apply
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t d;

	if (array && action)
	{
		d = 0;
		while (d < size)
		{
			action(array[d]);
			d++;
		}
	}
}
