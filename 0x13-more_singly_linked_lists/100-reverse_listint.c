#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node in list
 *
 * Return: pointer to first node in new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *n;

	i = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = n;
	}

	*head = i;
	return (*head);
}
