#include "main.h"
/**
 * *string_toupper - c function that capitalize a string
 * @str: pointer
 * Return: capitalzied string
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
