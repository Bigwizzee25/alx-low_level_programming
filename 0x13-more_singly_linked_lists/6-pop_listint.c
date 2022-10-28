#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: Double pointer to the linked listint_t
 * Return: The head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (n);
}
