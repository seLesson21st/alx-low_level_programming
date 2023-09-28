#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: value to set the bit
 * @index: where to set the bit
 * Return: 1 if successful, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	position = 1 << index;
	*n = *n | position;

	return (1);
}
