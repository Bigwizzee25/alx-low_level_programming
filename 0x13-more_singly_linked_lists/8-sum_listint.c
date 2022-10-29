#include "lists.h"

/**
 * sum_listint - function that sums up all the data of a linked listint_t.
 * @head: A pointer to the linked list structure
 * Return: The sum of the elements of the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
