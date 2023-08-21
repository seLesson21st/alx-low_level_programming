#include "main.h"

/**
 * _rev - unction that prints a string, in reverse, followed by a new line
 * @i: string refence pointer
 * Return: Always 0
 */

void _rev(char *i)
{
	int begin = 0;

	while (i[begin])
		begin++;
	while (begin--)
		_putchar(i[begin]);
	_putchar('\n');
}
