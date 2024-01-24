#include "main.h"
/**
 * append_text_to_file - add text to the already existing file
 *
 * @filename: the name of a file to append content 
 * @text_content: THE CONTENT THATS TO BE APPENDED TO THE FILE
 *
 * Return: 1 on success and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fud;
	int netters;
	int rer;

	if (!filename)
		return (-1);

	fud = open(filename, O_WRONLY | O_APPEND);

		if (fud == -1)
			return (-1);

	if (text_content)
	{
		for (netters = 0; text_content[netters]; netters++)
			;
		rer = write(fud, text_content, netters);

		if (rer == -1)
			return (-1);
	}
	close(fud);

	return (1);
}
