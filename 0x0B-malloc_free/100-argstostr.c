#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: pointer to array of arguments
 *
 * Return: pointer to new string
 * NULL if ac == 0 or av == NULL
 * NULL if memory allocation fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *s;

	if (ac == 0 || av == NULL)
		return NULL;

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;  // +1 for the \n character
	if (s == NULL)
		return NULL;

	for (i = 0, k = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++, k++)
			s[k] = av[i][j];
	s[k] = '\0';

	return s;
}
