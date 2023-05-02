#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a double pointer to the starting node of a listint_t list
 *
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int c;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	c = tmp->n;

	free(tmp);

	return (c);
}
