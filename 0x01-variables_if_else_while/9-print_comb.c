#include <stdio.h>
/**
 * main - to print all posible combinations of single digits
 * by the noskshade
 * Return: 0
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}
