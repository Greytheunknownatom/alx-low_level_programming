#include <stdio.h>
/**
 * main - print out sizes of various types in C
 * code by the noskshade
 *  Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	puts("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	puts("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
	puts("size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	puts("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	puts("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
	return	(0);
}
