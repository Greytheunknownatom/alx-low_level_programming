#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * noskshaddreamwalking
 * @s: char to check
 * Return: 0
*/
int _strlen(char *s)
{
	int a = 0; /* start the counter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
