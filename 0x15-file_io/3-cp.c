#include "main.h"

char *create_buffer(char *filename);
void close_filename(int fd);


/**
 * create_buffer - Provide 1024 bytes of memory for buffer use
 * @filename: File needed to write details of buffer into
 *
 * Return: Exit with pointer to memory
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(1024 * sizeof(char));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}


/**
 * close_filename - Function to close file descriptor
 *
 * @fd: File descriptor to be closed
 */
void close_filename(int fd)
{
	int closeValue;

	closeValue = close(fd);

	if (closeValue == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



/**
 * main - Main function which will copy details in one file to another
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 * Return: Leave program with 0 as success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readValue, writeValue;
	char *buffer;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}


	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	readValue = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (file_from == -1 || readValue == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n",
					argv[1]);
			free(buffer);
			exit(98);
		}

		writeValue = write(file_to, buffer, readValue);

		if (file_to == -1 || writeValue == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		readValue = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readValue > 0);


	free(buffer);
	close_filename(file_from);
	close_filename(file_to);

	return (0);
}
