#include <stdio.h>

/**
 * main - entry point to program
 *
 * Description: Write a program that prints the alphabet
 * in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always exit with code 0
 */

int main(void)
{
	char lowercase_value = 97;
	char uppercase_value = 65;

	while(lowercase_value <= 122)
	{
		putchar(lowercase_value);
		lowercase_value++;
	}

	while(uppercase_value <= 90)
	{
		putchar(uppercase_value);
		uppercase_value++;
	}
	
	putchar('\n');

	return (0);
}
