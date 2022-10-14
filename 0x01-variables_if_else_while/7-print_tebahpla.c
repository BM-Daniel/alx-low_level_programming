#include <stdio.h>

/**
 * main - entry point to program
 *
 * Description: Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line
 *
 * Return: Always exit with code 0
 */

int main(void)
{
	char alphabet_value = 122;

	while (alphabet_value >= 97)
	{
		putchar(alphabet_value);
		alphabet_value--;
	}

	putchar('\n');

	return (0);
}
