#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the integer
 * @index: is the index, starting from 0 of the bit.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 63)
		return (-1);
	p = 1 << index;
	*n &= ~p;
	return (1);
}
