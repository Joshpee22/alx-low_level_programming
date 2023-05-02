#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a double pointer to the starting node of the
 * listint_t linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *next;

	if (!head || !*head)
		return (NULL);

	pre = NULL;

	while ((*head)->next)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}

	(*head)->next = pre;

	return (*head);
}
