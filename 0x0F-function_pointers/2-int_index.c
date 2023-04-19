#include "function_pointers.h"
/**
* int_index - this function searches for an interger
* prototype for the function -
* int int_index(int *array, int size, int (*cmp)(int))
* @int_index: returns the index of the first element
* @array:array
* @size:number of elements in the array
* @cmp:pointer to the function to be used to compare values
* Return: if size <= 0 return (-1) & if no element matches (-1)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int e = 0;


	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (e < size)
			{
				if (cmp(array[e]))
					return (e);

				e++;
			}
		}
	}

	return (-1);
}
