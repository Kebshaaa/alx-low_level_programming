#include "main.h"

/**
 * clear_bit - a function that set a value of a bit 0
 * @n: input
 * @index: index
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
