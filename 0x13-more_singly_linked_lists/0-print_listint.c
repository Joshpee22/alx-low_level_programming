#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int tmp = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		tmp++;
		temp = temp->next;
	}

	return (tmp);
}
