#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: data of head node, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (&head)->next;
	free(*head);
	*head = temp

	return (num);
}
