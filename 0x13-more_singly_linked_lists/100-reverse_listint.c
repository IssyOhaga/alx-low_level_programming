#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *p;

	n = NULL;
	p = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
