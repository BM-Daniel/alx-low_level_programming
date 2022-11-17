#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new
 * line
 *
 * @separator: where separator is the string to be printed between numbers
 * @n: and n is the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	if (separator == NULL)
		return;

	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));

		if (i != n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(numbers);
}
