#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a unsigned long int
 * @n: the decimal number to search for the bit
 * @index: index of the bit
 *
 * Return: value of the bit at the given index, or -1 if an error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
