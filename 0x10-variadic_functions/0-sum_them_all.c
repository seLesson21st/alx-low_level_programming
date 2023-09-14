#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Arguments passed
 * @...: variable to calc sum of
 * Return: 0 if n==0, if not return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int x, sum = 0;

	va_start(ad, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ad, int);
	va_end(ad);
	return (sum);
}
