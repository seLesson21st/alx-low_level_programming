#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print the last digit
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int ld;

		srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is n and is greater than 5", ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0", n, ld);
	else
		printf("Last digit of %d is %d and is 0", n, ld);
	return (0);
}
