#include "3-calc.h"

/**
 * op_add - calculates the sum of two inputs
 * @a: first input
 * @b: second input
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of two inputs
 * @a: first input
 * @b: second input
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of two inputs
 * @a: first input
 * @b: second input
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the division of two inputs
 * @a: first input
 * @b: second input
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remainder of two inputs
 * @a: first input
 * @b: second input
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
