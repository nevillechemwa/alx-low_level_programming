#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return NULL;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		l++;	
	}

	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;
	l = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = av[k][l];
		if (k >= i)
		{
			s[k] = '\n';
			j++;
		}

		k++;
		l++;
	}

	s[k] = '\0';
	return s;
}
