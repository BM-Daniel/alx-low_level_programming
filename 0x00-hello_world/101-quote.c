#include <unistd.h>

/**
 *  main - entry point
 *
 *  description - print out a statement to the standard error
 *
 *  return - always exit with code 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}
