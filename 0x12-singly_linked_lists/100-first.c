#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * turtle - prints before main
 */

void __attribute__ ((constructor)) turtle()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}