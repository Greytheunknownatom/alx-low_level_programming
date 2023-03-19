#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * code by the noskshade
 * Return: 0
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
	putchar(a);
	putchar('\n');
	return (0);
}
