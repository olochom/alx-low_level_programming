#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1 in unsigned long int
 * @n: A pointer to the decimal to modify
 * @index: index of the bit to set to 1, where 0 is least significant
 *
 * Return: 1 for success, -1 for failure or error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
