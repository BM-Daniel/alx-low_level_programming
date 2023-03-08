#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: Integer number
 * @m: Integer number
 *
 * Return: Exit with new value
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
