#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @i: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *i)
{
	int count = 0;

	while (i)
	{
		count++;
		i = i->next;
	}
	return (count);
}
