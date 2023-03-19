#include <stdio.h>
/**
 * main - print all single digits numbers of base 10 starting from zero
 * code by the noskshade
 * Return: 0
*/
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
	putchar('0' + a);
	putchar('\n');
	return (0);
}
