#include "main.h"
/**
* create_array - function that creates an array of chars
* initilizes with a specific char
* prototype for function - char *create_array(unsigned int size, char c)
* @c: char to be checked
* @size: array size
* Return: NULL IF SIZE = 0 or return a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *haze;
	unsigned int e;

	if (size == 0)
		return (NULL);

	haze = (char *)malloc(sizeof(char) * size);
	if (haze == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		haze[e] = c;

	return (haze);
}
