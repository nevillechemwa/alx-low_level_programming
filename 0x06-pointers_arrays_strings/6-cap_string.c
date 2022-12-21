#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes a string
 * @s: string to be capitalized
 * Return: char value
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1]
					== '.' || s[i - 1] == '!' || s[i - 1] == '"'
					|| s[i - 1] == ')' || s[i - 1] == '(' ||
					s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1]
					== '\n' || s[i - 1] == 32 || s[i - 1] == '\t')
				        s[i] -= 32;
		}
		i++;
	}
	return (s);
}
