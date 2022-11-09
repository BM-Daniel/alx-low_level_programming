#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers
 *
 * @width: The number of columns in a row
 * @height: The total number of rows to be created
 *
 * Return: Exit with 2d array of memory
 */

int **alloc_grid(int width, int height)
{
	int **row;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	row = malloc(height * sizeof(int *));

	if (row == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		row[i] = malloc(width * sizeof(int));

		if (row[i] == NULL)
		{
			for ( ; i >= 0; i--)
			{
				free(row[i]);
			}

			free(row);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			row[i][j] = 0;
		}
	}

	return (row);
}
