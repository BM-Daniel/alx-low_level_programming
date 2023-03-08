#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Write a function that prints strings, followed by a new
 * line
 *
 * @separator: where separator is the string to be printed between the strings
 * @n: and n is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *vaString;


	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		vaString = va_arg(str, char *);

		if (vaString == NULL)
		{
			printf("(nil)");
			continue;
		}

		printf("%s", vaString);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	va_end(str);

	printf("\n");
}
