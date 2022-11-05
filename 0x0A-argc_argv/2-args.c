#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit with 0 as success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
