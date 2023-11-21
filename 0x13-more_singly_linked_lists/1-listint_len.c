#include "lists.h"

/**
 * listint_len - return the number of elements in a linked listint_t list.
 *
 * @h: The head pointer
 *
 * Return: number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
	h = h->next;
		num++;
	}
	return (num);
}
