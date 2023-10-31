#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: The name of the file to be opened
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, result, _count;

	result = 1;
	_count = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}

	while (text_content[_count] != '\0')
	{
		result = write(file, &text_content[_count], 1);
		if (result == -1)
		{
			close(file);
			return  (-1);
		}

		_count++;
	}

	close(file);
	return (1);
}
