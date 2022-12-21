#include "main.h"

/**
 * _strcat - function that concatenates a string
 * @dest: input string
 * @src: input string
 * Return: points to a string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
