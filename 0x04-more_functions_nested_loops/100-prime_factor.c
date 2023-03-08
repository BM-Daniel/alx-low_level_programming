#include <stdio.h>
#include <math.h>

/**
 * main - entry point to program
 *
 * Description: Write a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line
 *
 * Return: exit with code 0 as success
 */

int main(void)
{
	long number = 612852475143;
	long i, largest_factor;

	float square_root = sqrt(number);

	for (i = 1; i <= square_root; i++)
	{
		if (number % i == 0)
		{
			largest_factor = number / i;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}
