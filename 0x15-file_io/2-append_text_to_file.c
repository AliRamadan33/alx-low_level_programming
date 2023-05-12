#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int FD,Nletters,RWR;

	if (!filename)
		return (-1);

	FD = open(filename, O_WRONLY | O_APPEND);

	if (FD == -1)
		return (-1);

	if (text_content)
	{
		for (Nletters = 0; text_content[Nletters]; Nletters++)
			;

		RWR = write(fd, text_content, Nletters);

		if (RWR == -1)
			return (-1);
	}

	close(FD);

	return (1);
}
