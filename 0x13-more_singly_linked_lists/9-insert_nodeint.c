#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in index at index
 * @head: pointer to first node in list
 * @idx: index of node
 * @n: value of head node
 *
 * Return: pointer to new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	while (tmp != NULL && num != idx - 1)
	{
		tmp = tmp->next;
		num++;
	}

	if (num != idx - 1 && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx != 0)
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
