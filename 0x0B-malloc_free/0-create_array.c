#include "main.h"
#include <stdio.h>

/**
 * create_array - function tht create an aray of char
 * @size: sixe of an array
 * @c: character
 * Returns: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++
	}
	return (s);
}
