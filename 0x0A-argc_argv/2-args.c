#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
		return (0);
}
