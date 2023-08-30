#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: To be calculated
 * Return: The results of n,
 *  -1 if no square root found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (the_sqrt_recursion(n, 0));
			}
			/**
			 * the_sqrt_recursion - find the square root
			 * @n: To be calculated
			 * @x: pointer
			 * Return: The results of n
			 */
			int the_sqrt_recursion(int n, int x)
			{
			if (x * x > n)
			return (-1);
			if (x * x == n)
			return (x);
			return (the_sqrt_recursion(n, x + 1));
			}
