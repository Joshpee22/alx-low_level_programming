#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: a double pointer to the starting node of listint_t list
 * @index: the position of the element of the listint_t list to be
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *tmp, *next;

	if (!*head)
		return (-1);

	tmp = *head;

	if (!index)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp && (c++ < (index - 1)))
		tmp = tmp->next;

	if (!tmp || !tmp->next)
		return (-1);

	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;

	return (1);
}
