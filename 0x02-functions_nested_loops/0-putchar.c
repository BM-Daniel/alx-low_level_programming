#include "main.h"

/**
 * main - entry ponint of program
 *
 * Description: Write a program that prints _putchar, followed by a new line
 *
 * Return: Always exit code 0 as success
 */

int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
