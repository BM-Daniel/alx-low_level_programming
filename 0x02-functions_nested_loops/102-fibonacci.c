#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Exit 0 as success
 */

int main(void)
{
	unsigned int i, c;
	unsigned int a = 1;
	unsigned int b = 2;

	printf("%u, ", a);
	printf("%u, ", b);

	for(i = 3; i <= 50; i++)
	{
		c = a + b;
		if (i == 49)
		{
			printf("%u", c);
			continue;
		}

		printf("%u, ", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
