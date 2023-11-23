#include "main.h"

/**
 * binary_to_uint - convert a binary num to an unsigned integer
 * @b: pointing to a string of 0 and 1 char
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int h;

	h = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		h <<= 1;
		if (b[i] == '1')
			h += 1;
	}
	return (h);
}
