#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: Always 0;
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char c;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		c = s[i];
		s[i++] = s[len];
		s[len] = c;
	}
}
