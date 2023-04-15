#include <stdio.h>
#include "main.h"

/**
* _putchar - this function writes the character c to stdout
* prototype for this function - int _putchar(char c)
* @c: the character to print
* Return: (1) on success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
