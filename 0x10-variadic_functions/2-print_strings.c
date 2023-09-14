#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: If separator is NULL, don’t print it,
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int indx;

	va_start(strs, n);
	for (indx = 0; indx < n; indx++)
	{
		str = va_arg(strs, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
