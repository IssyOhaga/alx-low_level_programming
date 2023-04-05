#include "lists.h"

/**
 * free_listint - frees list
 * @head: listint_t list to be freed
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
