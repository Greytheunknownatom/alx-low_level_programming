#include <stdlib.h>
#include <stdio.h>
/**
 * main- print alphabets in lower case excluding q and e
 * code by thenoskshade
 * Return: 0
*/
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
		int i;

		for (i = 0; i < 24; i++)
		{
			putchar(alp[i]);
		}
		putchar('\n');
		return (0);
}
