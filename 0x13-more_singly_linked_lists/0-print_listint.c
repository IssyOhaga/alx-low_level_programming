#include "lists.h"

/**
 * print_listint - prints integer in linked list
 * @h: struct listint_t to ptint
 * Return: value of size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
