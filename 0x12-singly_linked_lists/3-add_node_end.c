#include "lists.h"

/**
 *add_node_end - adds node at the end of the list
 *@head: linked list
 *@str: string
 *Return: new node
 */
int _strlen_recursion(char *s);

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *temp = *head;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	add->str = strdup(str);
	if (!add->str)
	{
		free(add);
		return (NULL);
	}
	add->len = _strlen_recursion(add->str);
	add->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = add;
	}
	else
		*head = add;

	return (add);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @str: string.
 * Return: length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
