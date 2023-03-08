#include "main.h"
#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Exit with code 0 as success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
