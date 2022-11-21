#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - Write a program that performs simple operations
 *
 * Return: Exit with 0 as success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	printf("Start2");

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *op == '/') || (num2 == 0 && *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
