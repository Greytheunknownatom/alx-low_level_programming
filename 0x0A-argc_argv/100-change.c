#include <stdio.h>
#include <stdlib.h>

/**
* main - this program prints the min number of coins to make change
* for an amount of money 
* @argc: count of argumemnt
* @argv: arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	int total, count;
	unsigned int f;
	char *l;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &l, 10);
	count = 0;

	if (!*l)
	{
		while (total > 1)
		{
			for (f = 0; f < sizeof(cents[f]); f++)
			{
				if (total >= cents[f])
				{
					count += total / cents[f];
					total = total % cents[f];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
