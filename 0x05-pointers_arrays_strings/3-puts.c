#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: pointer to string
 * Return: String and a new line
 */

void _put(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
