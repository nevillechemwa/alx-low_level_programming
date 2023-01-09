#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string str
 * @str: string to be copied
 * Return: returns NULL id str = NULL else return duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = malloc(strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str);

	return (duplicate);
}
