#include "main.h"
/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers
* prototype of the the function - int **alloc_grid(int width, int height)
* @width: width of array
* @height: height of array
* Return: pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int **array, f, k;

	int measure = width * height;

	if (measure <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		array[f] = (int *)malloc(sizeof(int) * width);
		if (array[f] == NULL)
		{
			for (f--; f >= 0; f--)
				free(array[f]);
			free(array);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
		for (k = 0; k < width; k++)
			array[f][k] = 0;

	return (array);
}
