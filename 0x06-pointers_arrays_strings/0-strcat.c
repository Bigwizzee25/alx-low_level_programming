#include "main.h"
#include "string.h"

/**
 * *_strcat - concatenates two strings
 * @*dest: pointer destination
 * @*src: pointer source
 * Description: This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		(dest[dest_len + i] = src[i]);
	dest[dest_len + i] = '\0';
	return (dest);
}
