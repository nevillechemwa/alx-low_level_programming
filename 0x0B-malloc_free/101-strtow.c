#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
	int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;
	bool in_word = false;

	if (str == NULL || *str == '\0')
		return NULL;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				total_words++;
				in_word = true;
			}
		}
		else
		{
			in_word = false;
		}
	}
	if (total_words == 0)
		return NULL;

	words = malloc((total_words + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	for (int i = 0; *str != '\0' && b < total_words; i++)
	{
		if (*str == ' ')
		{
			str++;
		}
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			words[b] = malloc((length + 1) * sizeof(char));
			if (words[b] == NULL)
			{
				for (int i = 0; i < b; i++)
				{
					free(words[i]);
				}
				free(words);
				return NULL;
			}
			for (int i = 0; *found_word != ' ' && *found_word != '\0'; i++)
			{
				words[b][i] = *found_word;
				found_word++;
			}
			words[b][length] = '\0';
			 b++;
			 length = 0;
			 str++;
		}
	}
	words[total_words] = NULL;
	return words;
}
