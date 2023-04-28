#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

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
	add->next = *head;
	*head = add;

	return (add);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
