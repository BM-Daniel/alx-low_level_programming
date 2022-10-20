#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Each new term in the Fibonacci sequence is generated
 * by adding the previous two terms. By starting with 1 and 2, the
 * first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * By considering the terms in the Fibonacci sequence whose values
 * do not exceed 4,000,000, write a program that finds and prints
 * the sum of the even-valued terms, followed by a new line
 *
 * Return: Exit 0 as success
 */

int main(void)
{
	unsigned int sum, c;
	unsigned int a = 1;
	unsigned int b = 2;

	sum = 2;

	while (1)
	{
		c = a + b;

		if (c > 4000000)
		{
			break;
		}

		if (c % 2 == 0)
		{
			sum += c;
		}

		a = b;
		b = c;
	}

	printf("%u\n", sum);

	return (0);
}
