#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (num);
	tmp = *head;
	num = tmp->n;
	free(*head);
	*head = tmp->next;

	return (num);
}
