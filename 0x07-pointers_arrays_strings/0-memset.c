#include "main.h"

/**
 * _memset - function to fill the first @n byts of the memory area pointed
 * to by @s with th constant byte @b
 *
 * @n: byte of the memory area pointed to by @s
 *
 * @s: with the constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
