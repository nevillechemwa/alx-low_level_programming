#include "main.h"

/**
 * tring_toupper - Changes all lowercase letters to uppercase
 * @p: an input string
 * Return: char var
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
		a++;
	}
	return (p);
}
