#include <stdio.h>
/**
 * main - function that prints first 50 fibonacci numbers,
 * begining with 1 and 2 seperated by a comma followed by a space
 * noskshade hello
 * Return: 0
*/
int main(void)
{
	int master;
	unsigned long hit1 = 0, hit2 = 1, sum;

	for (master = 0; master < 50; master++)
	{
		sum = hit1 + hit2;
		printf("%lu", sum);

		hit1 = hit2;
		hit2 = sum;

		if (master == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}
