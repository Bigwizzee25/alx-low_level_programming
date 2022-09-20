#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length
 * @s: pointer to the string to check
 * Return:void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
