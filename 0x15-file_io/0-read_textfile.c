#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a textfile and prints it out to the standard output
 * @filename: the textfile to be read
 * @letters: the number of bytes to be read
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _rd, _wt;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	_rd = read(fd, buff, letters);
	if (_rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	_wt = write(STDOUT_FILENO, buff, _rd);
	if (_wt == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	return (_rd);
}


