#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - prints calloc
 * @nmemb: input string
 * @size: input string
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, a;

	a = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(a);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (a); i++)
	{
		p[i] = 0;
	}
	return (p);
}
