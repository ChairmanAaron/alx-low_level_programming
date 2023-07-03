#include "main.h"

/**
 * _memset - Function to fill memory area.
 * @n: Number of bytes to be changed.
 * @s: Starting address of memory to be filled.
 * @b: Constant value.
 * Return: Array to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

