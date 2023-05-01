#include "lists.h"
/**
 * add_nodeint_end - adds node to end of linked list
 * @head: double pointer to end
 * @n: integer data
 * Return: address of a new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		current = *head;
		while (current->next)
			current = current->next;

		current->next = new_node;
	}
	else
	{
		*head = new_node;
		return (*head);
	}

	return (current);
}
