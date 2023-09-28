#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the numbers to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int x, scan = 0;
	unsigned long int factor;

	for (x = 63; x >= 0; x--)
	{
		factor = n >> x;
		if (factor & 1)
		{
			_putchar('1');
			scan++;
		}
		else if (scan)
		{
			_putchar('0');
		}
	}
}
