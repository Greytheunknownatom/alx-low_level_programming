#include <stdio.h>
/**
* thenoskshader - print out a string
*/
void thenoskshader(void) __attribute__ ((constructor));

void thenoskshader(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
