#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: Path to file
 * @letters: where letters is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, readValue, writeValue;


	if (filename == NULL)
		return (0);


	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	readValue = read(fd, buffer, letters);
	close(fd);

	writeValue = write(STDOUT_FILENO, buffer, readValue);

	if (readValue == -1 || writeValue == -1 || readValue != writeValue)
	{
		free(buffer);
		return (0);
	}

	return (writeValue);
}
