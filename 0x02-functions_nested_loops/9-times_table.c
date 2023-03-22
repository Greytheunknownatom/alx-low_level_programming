#include "main.h"
/**
 * times_table - function that prints 9 times table, starting with zero
 * thenoskshade(dreamwalking)
*/
void times_table(void)
{
	int g, r, e;

	for (g = 0; g < 10; g++)
	{
		for (r = 0; r < 10; r++)
		{
			e = r * g;
			if (r == 0)
			{
				_putchar(e + '0');
			}
			if (e < 10 && r != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
