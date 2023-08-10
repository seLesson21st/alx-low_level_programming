#include<stdio.h>
/**
 * main -  size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", (int)sizeof(char));
	printf("Size of int: %d byte(s)\n", (int)sizeof(int));
	printf("Size of long int: %d byte(s)\n", (int)sizeof(long int));
	printf("Size of long long: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
