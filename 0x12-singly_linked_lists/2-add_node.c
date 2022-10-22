#include "lists.h"
#include <string.h>

int _strlen(const char *s);
/**
 * *add_node - function that adds a new node at the beginning of a list_t
 * @head: pointer to the beginning of the node
 * @str: pointer to the string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - returns the length of a string
 * @s: a pointer to the string
 * Return: length
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
