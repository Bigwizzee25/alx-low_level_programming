#include "lists.h"

/**
 * *reverse_listint - function that reverses a linked list
 * @head: A pointer to the linked list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node;

	if (!*head)
		return (0);
	while ((*head)->next != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		(*head) = next_node;
	}
	(*head)->next = prev_node;
	return (*head);
}
