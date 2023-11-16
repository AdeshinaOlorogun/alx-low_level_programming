#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @i: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *i)
{
	int count = 0;

	while (i)
	{
		if (i->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", i->len, i->str);
		}
		count++;
		i = i->next;
	}
	return (count);
}
