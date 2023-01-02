#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area to be filed
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
