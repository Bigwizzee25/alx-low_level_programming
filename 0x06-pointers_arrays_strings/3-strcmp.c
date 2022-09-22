#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, negative if s1 < s2,
 *         positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	/**
	 * We have reached the end of S1 OR we have reached the end of S2
	 *
	 */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
