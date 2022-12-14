#include "main.h"

/**
 * append_text_to_file - Write a function that appends text at the end
 * of a file
 *
 * @filename: where filename is the name of the file
 * @text_content: and text_content is the NULL terminated string to add
 * at the end of the file
 *
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openValue, writeValue, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}

	openValue = open(filename, O_WRONLY | O_APPEND);
	writeValue = write(openValue, text_content, length);
	close(openValue);

	if (openValue == -1 || writeValue == -1)
		return (-1);

	return (1);
}
