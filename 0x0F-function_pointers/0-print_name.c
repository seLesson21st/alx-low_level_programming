#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: The name to be printed
 * @f: pointer to function that prints name
 * Return: NULL if it fails
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
