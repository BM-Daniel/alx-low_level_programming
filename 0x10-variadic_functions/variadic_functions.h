#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char letter);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


/**
 * struct printer - A strucutre to inform the print functions what to print
 *
 * @type: Represents the data type of info to be printed
 * @print: A function pointer needed to print the info
 */
typedef struct printer
{
	char *type;
	void (*print)(va_list arguments);
} struct_blueprint;


void print_all(const char * const format, ...);

#endif
