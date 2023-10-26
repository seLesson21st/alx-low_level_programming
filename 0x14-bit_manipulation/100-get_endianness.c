#include "main.h"

/**
 * get_endianness - function that checks for endianness
 * Return: 0 for big endian, 1 for small endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *pit = (char *)&x;

	if (*pit)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
