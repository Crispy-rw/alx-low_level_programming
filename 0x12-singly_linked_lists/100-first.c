#include <stdio.h>

void before_main() __attribute__((constructor));

/**
* before_main - printf before the main function
* Return Void
*/

void before_main()
{
printf("You're beat! and yet, you must allow,\n \
	I bore my house upon my back!\n");
}

