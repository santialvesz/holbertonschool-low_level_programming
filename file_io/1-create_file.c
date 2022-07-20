#include "main.h"

/**
 * create_file - a function that reads a text file and prints it to stdout
 * @filename: string input for text file
 * @text_content: number of letters ir should read and print
 * Return: actual number of leeters it could read and print, 0 if file cant
 * be accessed or if file is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int aux, x, i;

	if (!filename)
		return (-1);
	aux = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (aux == -1)
		return (-1);
	if (!text_content)
	{
		close(aux);
		return (1);
	}
	for (i = 0; text_content[i]; i++)
		;
	ax = write(aux, text_content, i);
	if (x == -1)
	{
		close(aux);
		return (-1);
	}
	close(aux);
	return (1);
}
