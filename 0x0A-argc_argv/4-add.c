#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit with 0 as success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		exit(0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
