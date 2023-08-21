#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: pointer to string
 * Return: String and a new line
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c])
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
