#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: dest memory
 * @src: source memory
 * @n: bytes from the memory to be copied
 * Return: memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
