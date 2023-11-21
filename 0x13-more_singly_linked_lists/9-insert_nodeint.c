#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a ptr node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: ptr node value
 *
 * Return: the address of ptr node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp, *ptr;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (a = 0; a < idx - 1 && temp != NULL; a++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
