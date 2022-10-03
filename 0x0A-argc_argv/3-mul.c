#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: int
 * @argv: list
 * Return: 1 on error
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
