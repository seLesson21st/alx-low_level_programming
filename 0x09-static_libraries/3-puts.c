#include "main.h"

/**
 * _puts - function that prints a string to stdout
 * and a new line
 * @s: string to be printed
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
