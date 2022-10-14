#include <stdio.h>

/**
 * main - entry point to program
 *
 * Description: Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line. Only putchar function can be used. Type char is not allowed
 *
 * Return: Always exit with code 0
 */

int main (void)
{
	int start = 0;

	while (start < 10)
	{
		putchar(start);
		start++;
	}

	putchar('\n');

	return (0);
}
