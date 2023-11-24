#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip from one number to another.
 * @n: First number
 * @m: Second number
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;
	unsigned int size = sizeof(unsigned long int) * 8;

	while (size > 0)
	{
		count += difference & 1;
		difference >>= 1;
		size--;
	}

	return count;
}
