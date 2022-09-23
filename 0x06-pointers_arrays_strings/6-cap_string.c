#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Returns: returns length as integer;
 */

int strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * *cap_string - function that capitalizes words
 * @str: string to capitalize
 * Return: capitalzied string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= '2'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				Str[index – 1] == '\n' ||
				Str[index – 1] == ',' ||
				Str[index – 1] == '.'||
				Str[index – 1] == '!'||
				Str[index – 1] == '?'||
				Str[index – 1] == '"'||
				Str[index – 1] == '('||
				Str[index – 1] == ')'||
				Str[index – 1] == '{'||
				Str[index – 1] == '}')
			Str[index] -= 32;
	}
	return (str);
}
