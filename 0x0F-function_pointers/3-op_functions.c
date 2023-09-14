#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of two values
 * @a: the first value
 * @b: the second value
 * Return the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - function that returns the difference of two values
 * @a: the first value
 * @b: the second value
 * Return the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);

}

/**
 * op_mul - function that returns the product of two values
 * @a: the first value
 * @b: the second value
 * Return the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - function that returns the division of two values
 * @a: the first value
 * @b: the second value
 * Return the sum of a and b
 */

int op_div(int a, int b)
{
	return (a / b);

}

/**
 * op_mod - function that returns the modulus of two values
 * @a: the first value
 * @b: the second value
 * Return the mod of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);

}
