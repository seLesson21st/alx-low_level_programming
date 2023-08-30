#include "main.h"

/**
 * is_prime_number - function that returns 1 if
 * the input integer is a prime number
 * @n: the number
 * Return: 1 if n is a prime number and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_real_prime(n, n - 1));
}
/**
 * the_real_prime - find the prime number
 * @n: the number
 * @x: pointer
 * Return: x if n is a prime number and 0 if not
 */

int the_real_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (the_real_prime(n, x - 1));
}
