#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: an input string
 * Return: char var
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
