#include <stdio.h>

/**
 * main - program that prints all arguments it receives including the
 * first one
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
