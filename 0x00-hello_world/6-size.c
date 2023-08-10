#include<stdio.h>
/**
 * main - Start
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	double d;
	printf("Size of char: %d byte(s)\n", sizeof(c));
	printf("Size of int: %d byte(s)\n", sizeof(i));
	printf("Size of long int: %d byte(s)\n", sizeof(d));
	printf("Size of long long: %d byte(s)\n", sizeof(d));
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
