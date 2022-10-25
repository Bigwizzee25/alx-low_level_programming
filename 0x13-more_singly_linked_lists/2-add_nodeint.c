#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: a pointer to the linked list
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new;
	return (*head);
}
