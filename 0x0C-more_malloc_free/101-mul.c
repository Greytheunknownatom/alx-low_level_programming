#include "main.h"
/**
* _print - this function moves a string one place to the left
* and prints the string
* protoype for this fuction - void _print(char *str, int l)
* @str: string to be moved
* @1: size of string
* Return: void
*/
void _print(char *str, int l)
{
	int h, k;

	h = k = 0;
	while (h < 1)
	{
		if (str[h] != '0')
			k = 1;
		if (k || h == l - 1)
			_putchar(str[h]);
		h++;
	}
	
	_putchar('\n');
	free(str);
}

/**
* _mul - this function multiplies a char with a string and places
* places the answer into dest
* prototype for this function -
* char *mul(char n, char *num, int num_index, char *dest, int dest_index) 
* @n: char to be multiplied
* @num_index: last non NULL index of num
* @dest: multiplication destination
* @dest_index: highest index to start addition
* Return: pointer to dest, or NULL
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int l, m, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (l = num_index, m = dest_index; l >= 0; l--, m--)
	{
		mul = (n - '0') * (num[l] - '0') + addrem;
		mulrem = mul / 10;
		add = (dest[m] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[m] = add % 10 + '0';
	}
	for (addrem += mulrem; m >= 0 && addrem; m--)
	{
		add = (dest[m] - '0') + addrem;
		addrem = add / 10;
		dest[m] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
* init - this function initializes a string
* prototype for this function - void init(char *str, int l)
* @str: string to initialize
* @l: length of string
* Return: void
*/
void init(char *str, int l)
{
	int n;
	
	for (n = 0; n < l; n++)
		str[n] = '0';
	str[n] = '\0';
}

/**
* main - function that multiplies two strings
* prototype for this function - int main(int argc, char *argv[])
* @argc: number of arguments
* @argv: argument vector
* Return: (0) or exit status of 98 if program fails
*/
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - 1);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
