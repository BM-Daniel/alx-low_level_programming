#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#endif


/**
 * main - Write a program that prints the name of the file it was
 * compiled from, followed by a new line
 *
 * Return: Exit with 0 as success
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
