#include <stdio.h>
#include <stdlib.h>

/**
* main - this program adds positive numbers
* @argc: argument count
* @argv: arguments
* Return: (0)
*/
int main(int argc, char **argv)
{
	int h, i, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (h = 1; argv[h]; h++)
	{
		i = strtol(argv[h], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
