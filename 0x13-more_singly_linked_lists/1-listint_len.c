#include "lists.h"

/**
 * listint_len - length of the list
 * @h: linked list of struct to traverse
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
