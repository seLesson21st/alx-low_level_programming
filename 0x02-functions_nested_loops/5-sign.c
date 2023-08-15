#include "main.h"

/**
 *print_sign - Prints the sign of a number
 * @i: The number to be checked
 * Return: 1 for positive number, -1 for negative number or zero for anything else
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (i < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
