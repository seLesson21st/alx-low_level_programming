#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: value to check the bits
 * @index: where to check bit
 * Return: the value of the bit, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int factor, scan;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	factor = 1 << index;
	scan = n & factor;
	if (scan == factor)
	{
		return (1);
	}
	return (0);
}
