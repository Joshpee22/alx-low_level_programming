#include "lists.h"

/**
 * listint_len - finds number of elements in a linked listint_t list.
 * @h: head node of a linked listint_t list
 *
 * Return: the number of elements present in h
 */
size_t listint_len(const listint_t *h)
{
	int tmp = 0;
	const listint_t *temp = h;

	while (tmp)
	{
		tmp++;
		temp = temp->next;
	}
	return (tmp);
}
