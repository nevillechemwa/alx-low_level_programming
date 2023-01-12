#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - prints concatenate string
 * @s1: input string
 * @s2: input string
 * @n: len og string to print
 * Return: Nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
