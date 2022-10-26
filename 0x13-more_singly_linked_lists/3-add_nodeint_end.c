#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @head: A pointer to the singly linked list
 * @n: An integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
