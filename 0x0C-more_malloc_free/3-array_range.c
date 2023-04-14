#include "main.h"
/**
* array_range - this function creates an array of integers
* prototype for this function - int *array_range(int min, int max)
* @min: range of values stored (minimum)
* @max: range of values stored & number of elements (maximum)
* Return: pointer to new array
*/
int *array_range(int min, int max)
{
	int *hit;
	int d, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	hit = malloc(sizeof(int) * size);

	if (hit == NULL)
		return (NULL);

	for (d = 0; min <= max; d++)
		hit[d] = min++;

	return (hit);
}
