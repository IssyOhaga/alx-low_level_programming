#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to first node in the list
 * @n: value of new node
 * Return: ponter to new node, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next - NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next = new;

	return (new);
}
