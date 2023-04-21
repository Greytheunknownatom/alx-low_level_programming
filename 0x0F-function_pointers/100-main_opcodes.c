#include <stdlib.h>
#include <stdio.h>
/**
* print_opcodes - this program prints the opcodes of its own functiion
* @a: address of the main function
* @n: number of bytes to print
* Return: void
*/
void print_opcodes(char *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%.2hhx", a[p]);
		if (p < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
* main - this prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: array of pointers to arguments
* Return: (0)
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
