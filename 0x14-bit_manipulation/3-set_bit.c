#include "main.h"

/**
 * set_bit - this is value of a bit to 1 at a given index.
 * @index: start from 0 of the bit you want to set
 * @n: ptr number of i
 * Return: 1 if it worked, or -1 if there is an error 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
