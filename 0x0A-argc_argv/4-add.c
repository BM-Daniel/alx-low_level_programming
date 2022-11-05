#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
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
	char *pointer;
	int i, j, length;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			pointer = argv[i];
			length = strlen(argv[i]);

			for (j = 0; j < length; j++)
			{
				if (isdigit(pointer[j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
