#include "main.h"
#include <stddef.h>

/**
 * _strlen - function that counts string length
 * @str: string to be used
 * Return: length of the string used
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: content of the file to append
 * Return: 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, rite;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		rite = write(file, text_content, _strlen(text_content));
		if (rite == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
