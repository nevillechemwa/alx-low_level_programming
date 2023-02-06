#include "main.h"

/**
 * read_textfile - reads a text file and prints 
 * it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters
 * Return: 0 if a file cannot be open and is NULL
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int filed, r, w;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	filed = open(filename, O_RDONLY);

	if (filed == -1)
	{
		return (0);
	}

	r = read(filed, buffer, letters);

	if (r == -1)
	{
		return (0);
	}

	close(filed);

	return (w);
}
