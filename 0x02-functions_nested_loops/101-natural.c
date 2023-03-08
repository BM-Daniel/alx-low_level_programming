#include <stdio.h>
/**
 * main - Main entry of file
 *
 * Description: If we list all the natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these
 * multiples is 23. Write a program that computes and prints the
 * sum of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line
 *
 * Return: Always exit with code 0 as success
 */

int main(void)
{
	int number1 = 3;
	int number2 = 5;
	int sum = 0;
	int i = 0;
	int j = 0;

	while ((i * number1) < 1024)
	{
		sum += (i * number1);
		i++;
	}

	while ((j * number2) < 1024)
	{
		if ((j * number2) % 3 != 0)
		{
			sum += (j * number2);
		}
		j++;
	}

	printf("%d\n", sum);

	return (0);
}
