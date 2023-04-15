#include <stdio.h>
#include "stdlib.h"
/**
* main - the program adds positive numbers
* @argc: count of argument
* @argv: arguments
* Return: (0)
*/
int main(int argc, char **argv)
{
	int g, v;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	g = atoi(argv[1]);
	v = atoi(argv[2]);
	printf("%d\n", g * v);

	return (0);
}
