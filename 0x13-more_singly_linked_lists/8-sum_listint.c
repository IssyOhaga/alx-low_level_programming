#include "lists.h"

/**
 * sum_listint - calculates sum of list
 * @head : first node in the lsit
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
