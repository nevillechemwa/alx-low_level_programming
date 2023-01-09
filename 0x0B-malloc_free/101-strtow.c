#include "main.h"
#include <stdlib.h>

/**
 * strtow - A function that splits a string into words
 * @str: The string to split
 * Return: Return: A pointer to the array of strings (words), or NULL if str is NULL
 * or if the input string is empty or too long to fit in memory.
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, j, m, k = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		while (str[i] == ' ' || str[i] == '\t') i++;
		if (str[i] == '\0') break;

		if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			count++;
	}

	array = malloc((count + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		while (str[i] == ' ' || str[i] == '\t') i++;
		if (str[i] == '\0') break;

		len = 0;
		j = i;
		while (str[j] != ' ' && str[j] != '\t' && str[j] != '\0') j++, len++;

		array[k] = malloc((len + 1) * sizeof(char));
		if (array[k] == NULL)
		{
			for (k = k - 1; k >= 0; k--)
				free(array[k]);
			free(array);
			return (NULL);
		}
		for (m = 0; m < len; m++, i++)
			array[k][m] = str[i];
		array[k++][m] = '\0';
	}

	array[k] = NULL;
	return (array);
}

