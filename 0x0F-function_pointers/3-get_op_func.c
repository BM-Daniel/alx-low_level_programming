#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - This file should contain the function that selects the correct
 * function to perform the operation asked by the user. You’re not allowed
 * to declare any other function.
 *
 * @s: is the operator passed as argument to the program
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (*(ops[i].op) != *s && ops[i].op != NULL)
		i++;

	printf("%d", i);

	return (ops[i].f);
}
