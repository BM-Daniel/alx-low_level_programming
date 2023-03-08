#include "main.h"

/**
 * create_file - Create a function that creates a file
 *
 * @filename: where filename is the name of the file to create
 * @text_content: and text_content is a NULL terminated string to write to the
 * file
 *
 * The created file must have those permissions: rw-------. If the file
 * already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 *
 * Return:1 on success, -1 on failure (file can not be created, file can
 * not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int openValue, writeValue, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length++)
			;
	}

	openValue = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	writeValue = write(openValue, text_content, length);
	close(openValue);

	if (openValue == -1 || writeValue == -1)
		return (-1);

	return (1);
}
