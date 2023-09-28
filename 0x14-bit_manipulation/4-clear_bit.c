#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: value of bit to be cleared
 * @index: where to clear bit
 * Return: 1 if successful, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);

	return (1);
}
