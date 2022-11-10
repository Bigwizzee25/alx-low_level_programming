#include "main.h"
#include <stddef.h>

/**
 * _strlen - function that counts string length
 * @str: string to be used
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, rite;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
