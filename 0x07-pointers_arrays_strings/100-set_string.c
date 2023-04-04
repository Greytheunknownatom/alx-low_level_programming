#include "main.h"
/**
* set_string - function that sets the value of a pointer to a char
* prototype for function - void set_string(chaar **s, char *to)
* @s: pointer to change
* @to: string to change
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
