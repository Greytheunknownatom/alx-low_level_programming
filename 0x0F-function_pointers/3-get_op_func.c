#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
* get_op_func - function returns a pointer to the function that corresponds
* to the operator given as a parameter
* prototype for the function - int (*get_op_func(chaar *s))(int, int)
* @s: operator passed as argument to the program
* Return: (0)
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int f = 0;

	while (f < 5)
	{
		if (strcmp(s, ops[f].op) == 0)
			return (ops[f].f);

		f++;
	}

	return (0);
}
