#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src)
		*dest++ = *src++;
	return (c);
}
