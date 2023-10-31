#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, output = 1, _count = 0;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[_count])
			_count++;
		output = write(new_file, text_content, _count);
	}

	if (output == -1)
		return (-1);

	close(new_file);
	return (1);
}
