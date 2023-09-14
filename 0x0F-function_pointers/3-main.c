#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/** 
 * main -  function tha prints the results of 
 * simple math operation
 * @argc: Arguments directed to the program
 * @argv: Array to pointer in the argument
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int val1, val2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val1 = atoi(argv[1]);
	op = argv[2];
	val2 = atoi(argv[2]);

	if (get_op_func(op) = NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && val2 == 0) || (*op == '%' val2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(val1, val2));

	return (0);
