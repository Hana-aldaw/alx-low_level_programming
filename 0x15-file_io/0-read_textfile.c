#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. It fails, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y, z;
	char *c;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);
	c = malloc(size(char) * (letters));
	if (!c)
		return (0);
	y = read(x, c, letters);
	z = write(STDOUT_FILENO, c, y);

	close(x);

	free(c);

	return (z);
}
