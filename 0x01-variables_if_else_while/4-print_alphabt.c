#include <stdio.h>

/**
 * main - entry point to program
 *
 * Description: Write a program that prints the alphabet
in lowercase, followed by a new line. Letter q and e will
be left out
 *
 * Return: Always exit with code 0
 */

int main(void)
{
	char alphabet_value = 97;

	while(alphabet_value <= 122)
	{
		if (alphabet_value == 101 || alphabet_value == 113)
		{
			alphabet_value++;
			continue;
		}

		putchar(alphabet_value);
		alphabet_value++;
	}

	putchar('\n');

	return (0);
}
