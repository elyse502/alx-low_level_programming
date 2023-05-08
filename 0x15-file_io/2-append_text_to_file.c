#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a File.
 * @filename: A pointer to the name of the File.
 * @text_content: The string to add to the end of the File.
 *
 * Return: If the Function fails or Filename is NULL - -1.
 *         If the File does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	int w;
	int len = 0;/*int o, w, len = 0;*/

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
