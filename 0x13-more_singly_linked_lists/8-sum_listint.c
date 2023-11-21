#include "lists.h"

/**
 * sum_listint - add of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: add all the data
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
