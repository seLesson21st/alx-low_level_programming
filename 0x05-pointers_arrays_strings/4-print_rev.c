#include "main.h"

/**
 * print_rev - unction that prints a string, in reverse, followed by a new line
 * @i: string refence pointer
 * Return: Always 0
 */

void print_rev(char *i)
{
	int begin = 0;

	while (i[begin])
		begin++;
	while (begin--)
		_putchar(i[begin]);
	_putchar('\n');
}
