#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: string cointaing the banary
 * Return: the converted number, or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int digit;

	digit = 0;
	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		digit <<= 1;
		if (b[x] == '1')
		{
			digit += 1;
		}
	}
	return (digit);
}
