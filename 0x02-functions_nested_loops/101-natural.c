#include <stdio.h>

/**
 * multiply_and_add - A function to sum up the multiples
 *
 * @number: Number needed to find multiples
 *
 * Return: Exit with the sum
 */

int multiply_and_add(int number);

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

	int sum1 = multiply_and_add(number1);
	int sum2 = multiply_and_add(number2);

	int total = sum1 + sum2;
	
	printf("%d\n", total);

	return (0);
}


/**
 * multiply_and_add - This function will add up the multiples of a
 * number less than 1024
 *
 * @number: Value needed to find multiples
 *
 * Return: Exit with the sum
 */

int multiply_and_add(int number)
{
	int i = 0;
	int sum = 0;

	while ((i * number) < 1024)
	{
		sum += (i * number);
		i++;
	}

	return (sum);
}
