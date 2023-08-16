i#include "main.h"
/**
 * main - determination if anumber is positive, negative or zero
(* 0 : is the number to be checked
 * return : 0 on success
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
 	        printf("%d is %s\n", i,  "positive");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else
	{
		printf("%d is %s\n", i, "zero", i);
	}
	return;
}
