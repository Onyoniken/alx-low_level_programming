#include "main.h"

/**
 * create_file - main function
 * @filename: parameter 1
 * @text_content: parameter 2
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int c;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (b = 0; text_content[b]; b++)
		;

	c = write(a, text_content, b);

	if (c == -1)
		return (-1);

	close(a);

	return (1);

}
