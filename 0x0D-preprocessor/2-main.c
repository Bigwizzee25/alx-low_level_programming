#include <stdio.h>

/**
 * main - prints the name of the FILE it was compiled from,
 * followed by a new line
 * Return: int
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
