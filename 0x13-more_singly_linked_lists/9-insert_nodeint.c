#include "lists.h"

/**
 * *insert_nodeint_at_index - function that insert a node at given index
 * @head: A pointer to the linked list structure
 * @idx: An index of the list where the new node should be added
 * @n: integer
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *tmp = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (NULL);
	}
	for (; count < (idx - 1); count++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
