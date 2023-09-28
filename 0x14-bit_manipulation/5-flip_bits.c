#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 *  you would need to flip to get from one number to another.
 *  @n: first value
 *  @m: secomd value
 *  Return: bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int addbit = 0;
	unsigned long int new;
	unsigned long int unique = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		new = unique >> x;

		if (new & 1)
		{
			addbit++;
		}
	}
	return (addbit);
}
