#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase
 * code by thenoskshade
 * Return: 0
*/
int main(void)
{
	char alp[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
