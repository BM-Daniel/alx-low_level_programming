#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Write a function that allocates memory using malloc
 *
 * @b:
 */

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}
