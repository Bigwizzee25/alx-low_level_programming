#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the head node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head->str);
		head = head->next;
		free(temp);
	}
}
