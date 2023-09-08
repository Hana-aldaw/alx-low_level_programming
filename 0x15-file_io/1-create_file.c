#include "main.h"

/**
 * create__file - create a file
 *
 * @filename: filename
 * @text_content: content writed in the file
 *
 * Return: 1 if it success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int z;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (y = 0; text_content[y]; y++)
		;
	z = write(x, text_content, y);

	if (z == -1)
		return (-1);

	close(x);
	return (1);
}
