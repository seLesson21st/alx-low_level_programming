#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed inbetween numbers
 * @n number of inetegers passed
 * Return: If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int str;

	va_start(num, n);
	for (str = 0; str < n; str++)
	{
		printf("%d", va_arg(num, int));

		if (str != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
