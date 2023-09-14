#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: if the string is NULL, print (nil) instead
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *any = "";
	va_list all;

	va_start(all, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", any, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", any, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", any, va_arg(all, double));
					break;
				case 's':
					str = va_arg(all, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", any, str);
					break;
				default:
					x++;
					continue;
			}
			any = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(all);
}
