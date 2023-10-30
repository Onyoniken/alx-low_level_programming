#include "main.h"

/**
 * append_text_to_file - main function
 * @filename: main parameter
 * @text_content: parameter 2
 *
 * Return: 1 if file exsists, -1 if not exsist
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int c;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (b = 0; text_content[b]; b++)
			;
		c = write(a, text_content, b);

		if (c == -1)
			return (-1);
	}
	close(a);

	return (1);


}

