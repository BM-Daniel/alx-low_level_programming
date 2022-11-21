#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void print_character(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);


/**
 * print_character - Prints out a character
 * @arg: A variable pointing to the character to be printed
 */
void print_character(va_list arg)
{
	printf("%c", va_arg(arg, int));
}


/**
 * print_integer - Prints out an integer
 * @arg: A variable pointing to the integer
 */
void print_integer(va_list arg)
{
	printf("%d", va_arg(arg, int));
}


/**
 * print_float - Prints out a float
 * @arg: A variable pointing to the float
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}


/**
 * print_string - Prints out a string
 * @arg: A variable pointing to the string
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}




/**
 * print_all - Write a function that prints anything
 *
 * @format: where format is a list of types of arguments passed to the
 * function
 *
 * Description: Print out the value if it has data type of char, int, float
 * or char *. If string value is NULL, print out "(nil)".
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, j = 0;
	char *punctuation = "";

	blueprint functions[] = {
		{"c", print_character},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};


	va_start(arguments, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4 && (format[i] != *(functions[j].type)))
			j++;

		if (j < 4)
		{
			printf("%s", punctuation);
			punctuation = ", ";
			functions[j].print(arguments);
		}

		i++;
	}
	va_end(arguments);

	printf("\n");

}
