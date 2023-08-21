#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: swaps to store address of b
 * @b: swaps to store address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
