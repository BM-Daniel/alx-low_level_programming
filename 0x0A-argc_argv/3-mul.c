#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function with arguments
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit with code 0 as success
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
