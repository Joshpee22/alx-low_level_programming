#include "lists.h"

/**
 * new_node - adds a new node at the beginning of a list_t list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/

int _strlen_recursion(char *s);

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen_recursion(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen_recursion - returns the length of a string.
 * Return: length of _strlen_recursion.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
