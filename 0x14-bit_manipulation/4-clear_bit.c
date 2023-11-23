#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which the bit is to be cleared
 * @index: Index (starting from 0) of the bit to clear
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}

