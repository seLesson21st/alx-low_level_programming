#include<stdio.h>
/**
 * main -  size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(S)\n", (int)sizeof(char));
	printf("Size of an  int: %d byte(S)\n", (int)sizeof(int));
	printf("Size of a long int: %d byte(S)\n", (int)sizeof(long int));
	printf("Size of a long long: %d byte(S)\n", (int)sizeof(long long int));
	printf("Size of a float: %d byte(S)\n", (int)sizeof(float));
	return (0);
}
