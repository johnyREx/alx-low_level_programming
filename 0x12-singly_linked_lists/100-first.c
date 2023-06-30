#include <stdio.h>

void pre_main(void) __attribute__((constructor));

/**
 * pre_main - Function executed before the main function.
 */

void pre_main(void)
{
	printf("You're beat! and yet, you must all,\nI bore my house upon my back!\n");
}

int main(void)
{
	return (0);
}
