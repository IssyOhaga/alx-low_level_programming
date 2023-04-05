#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: head of list
 * @index: index of node
 *
 * Return: nth node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}

	return (head);
}
