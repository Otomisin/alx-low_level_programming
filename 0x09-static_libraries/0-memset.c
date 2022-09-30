#include "main.h"

/**
 * _memset - Fills memory with constant bytes
 *
 * @s: The buffer(pointer)
 *
 * @b: Character to be copied in memory
 *
 * @n: the n bytes of memory area to be pointed to.
 *
 * Return: Returns the pointer/buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
