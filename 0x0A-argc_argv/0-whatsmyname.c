#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line
 *
 * @argc: Argument count
 * @argv: Argument vector (one dimensional array)
 *
 * Return: Exit with 0 as success
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
