#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: Double pointer to the linked listint_t
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
